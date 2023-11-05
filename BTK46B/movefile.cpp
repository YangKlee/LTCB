#include <stdio.h>
#include <stdlib.h>

int main() {


	const char *sourceFilePath = "D:/FMOD/project/buchergenshin/bucher_remake/butcher.fsb";
    const char *destinationDirectory = "D:/IdentityV/Documents/res/sound/music";
    int result = rename(sourceFilePath, destinationDirectory);
    if (result == 0) {
        printf("Di chuyen file thanh cong\n");
    } else {
        printf("Error.\n");
    }

    return 0;
}
