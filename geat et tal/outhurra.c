/*********************************************************
Function:		OutHurra
Purpose:		N�r brugeren g�tter rigtigt har vi 2 beskeder som printers tl brugeren.
**********************************************************/
#include "Main.h" 
void outHurra(bool rigtig, int maxGaet, int antalGaet, int compuTal) {
	if (rigtig == true)
		if (antalGaet <= (2 / maxGaet)){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
	printf("                                   _                                _           \n");		//Besked til brugeren: Hurra - begynder
	printf("  /\\  /\\_   _ _ __ _ __ __ _      | |__   ___  __ _ _   _ _ __   __| | ___ _ __ \n");
	printf(" / /_/ / | | | '__| '__/ _` |_____| '_ \\ / _ \\/ _` | | | | '_ \\ / _` |/ _ \\ '__|\n");
	printf("/ __  /| |_| | |  | | | (_| |_____| |_) |  __/ (_| | |_| | | | | (_| |  __\/ |   \n");
	printf("\\/ /_/  \\__,_|_|  |_|  \\__,_|     |_.__/ \\___|\\__, |\\__, |_| |_|\\__,_|\\___|_|\n");
	printf("                                              |___/ |___/                       \n");
	printf("\n\ndu brugte over 50%% af din max g�t");
	printf("\ndu fand talle p� %d ud af %d", antalGaet, maxGaet);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	}
	else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 06);
	printf(" __    __ __                 __    __ __                 __    __ __    __ _______  _______   ______  \n");
	printf("/  |  /  /  |               /  |  /  /  |               /  |  /  /  |  /  /       \\/       \\ /      \\ \n");
	printf("$$ |  $$ $$/  ______        $$ |  $$ $$/  ______        $$ |  $$ $$ |  $$ $$$$$$$  $$$$$$$  /$$$$$$  |\n");
	printf("$$ |__$$ /  |/      \\ ______$$ |__$$ /  |/      \\ ______$$ |__$$ $$ |  $$ $$ |__$$ $$ |__$$ $$ |__$$ |\n");
	printf("$$    $$ $$ /$$$$$$  /      $$    $$ $$ /$$$$$$  /      $$    $$ $$ |  $$ $$    $$<$$    $$<$$    $$ |\n");
	printf("$$$$$$$$ $$ $$ |  $$ $$$$$$/$$$$$$$$ $$ $$ |  $$ $$$$$$/$$$$$$$$ $$ |  $$ $$$$$$$  $$$$$$$  $$$$$$$$ |\n");
	printf("$$ |  $$ $$ $$ |__$$ |      $$ |  $$ $$ $$ |__$$ |      $$ |  $$ $$ \\__$$ $$ |  $$ $$ |  $$ $$ |  $$ |\n");
	printf("$$ |  $$ $$ $$    $$/       $$ |  $$ $$ $$    $$/       $$ |  $$ $$    $$/$$ |  $$ $$ |  $$ $$ |  $$ |\n");
	printf("$$/   $$/$$/$$$$$$$/        $$/   $$/$$/$$$$$$$/        $$/   $$/ $$$$$$/ $$/   $$/$$/   $$/$$/   $$/ \n");
	printf("            $$ |                        $$ |                                                          \n");
	printf("            $$ |                        $$ |                                                          \n");
	printf("            $$/                         $$/                                                           \n");
	printf("\n\ndu fand talle p� %d ud af %d", antalGaet, maxGaet);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
}