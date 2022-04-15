#include "../winhttp.h"

//----- (00000001407E1D68) ----------------------------------------------------
int __fastcall sub_1407E1D68(int a1)
{
	__int64 StdHandle; // rax
	char* v3; // rbx
	__int64 v4; // rax
	void* v5; // rdi
	int v6; // r8d
	char* v7; // rdx
	DWORD v8; // eax
	DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-238h] BYREF
	char Buffer[512]; // [rsp+40h] [rbp-228h] BYREF

	StdHandle = sub_1407E1D38(a1);
	v3 = (char*)StdHandle;
	if (StdHandle)
	{
		if ((unsigned int)sub_1407DC1CC(3) == 1
			|| (LODWORD(StdHandle) = sub_1407DC1CC(3), !(_DWORD)StdHandle) && dword_140C5FB30 == 1)
		{
			StdHandle = (__int64)GetStdHandle(0xFFFFFFF4);
			v5 = (void*)StdHandle;
			if ((unsigned __int64)(StdHandle - 1) <= 0xFFFFFFFFFFFFFFFDui64)
			{
				v6 = 0;
				v7 = Buffer;
				do
				{
					*v7 = *v3;
					if (!*(_WORD*)v3)
						break;
					++v6;
					++v7;
					v3 += 2;
				} while ((unsigned __int64)v6 < 0x1F4);
				Buffer[499] = 0;
				v8 = sub_1407E1990((__int64)Buffer);
				LODWORD(StdHandle) = WriteFile(v5, Buffer, v8, &NumberOfBytesWritten, 0i64);
			}
		}
		else if (a1 != 252)
		{
			if ((unsigned int)sub_1407E6BF4((char*)word_140C5FB40, 788i64, (char*)L"Runtime Error!\n\nProgram: "))
			{
				sub_1407DC390();
				JUMPOUT(0x1407E1FD6i64);
			}
			word_140C5FD7A = 0;
			if (!GetModuleFileNameW(0i64, Filename, 0x104u)
				&& (unsigned int)sub_1407E6BF4((char*)Filename, 763i64, (char*)L"<program name unknown>"))
			{
				sub_1407DC390();
				__debugbreak();
			}
			if ((unsigned __int64)(sub_1407E6CA0(Filename) + 1) > 0x3C)
			{
				v4 = sub_1407E6CA0(Filename);
				if ((unsigned int)sub_1407E6D08(
					(__int64)&word_140C5FB40[v4 - 34],
					763 - (&word_140C5FB40[v4 - 34] - Filename),
					(char*)L"...",
					3i64))
				{
					sub_1407DC390();
					__debugbreak();
				}
			}
			if ((unsigned int)sub_1407E16D0(word_140C5FB40, 788i64, (char*)L"\n\n"))
			{
				sub_1407DC390();
				__debugbreak();
			}
			if ((unsigned int)sub_1407E16D0(word_140C5FB40, 788i64, v3))
			{
				sub_1407DC390();
				__debugbreak();
			}
			LODWORD(StdHandle) = sub_1407F00F0(word_140C5FB40, (__int64)L"Microsoft Visual C++ Runtime Library", 0x12010u);
		}
	}
	return StdHandle;
}
// 1407E1FD1: control flows out of bounds to 1407E1FD6
// 14095E0B0: using guessed type wchar_t aRuntimeErrorPr[26];
// 14095E0E8: using guessed type wchar_t aProgramNameUnk[23];
// 14095E118: using guessed type wchar_t asc_14095E118[4];
// 14095E120: using guessed type wchar_t asc_14095E120[3];
// 14095E130: using guessed type wchar_t aMicrosoftVisua[37];
// 140C5FB30: using guessed type int dword_140C5FB30;
// 140C5FB40: using guessed type WCHAR word_140C5FB40[25];
// 140C5FB72: using guessed type WCHAR Filename[260];
// 140C5FD7A: using guessed type __int16 word_140C5FD7A;

