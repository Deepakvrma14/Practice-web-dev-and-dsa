#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // Step 1: Check command line arguments
        if (argc < 3) {
            NSLog(@"Usage: %@ source_file destination_file", [NSString stringWithUTF8String:argv[0]]);
            return 1;
        }
        
        // Step 2: Open source file
        FILE *source_file = fopen(argv[1], "r");
        if (source_file == NULL) {
            NSLog(@"Error opening source file.");
            return 1;
        }
        
        // Step 3: Open destination file
        FILE *destination_file = fopen(argv[2], "w");
        if (destination_file == NULL) {
            NSLog(@"Error opening destination file.");
            return 1;
        }
        
        // Step 4: Read from source file and write to destination file
        char buffer[1024];
        while (fgets(buffer, 1024, source_file)) {
            fputs(buffer, destination_file);
        }
        
        // Step 5: Close files
        fclose(source_file);
        fclose(destination_file);
        
        NSLog(@"Data copied from %@ to %@.", [NSString stringWithUTF8String:argv[1]], [NSString stringWithUTF8String:argv[2]]);
    }
    return 0;
}

