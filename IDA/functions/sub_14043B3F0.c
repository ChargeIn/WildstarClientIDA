#include "../winhttp.h"

//----- (000000014043B3F0) ----------------------------------------------------
void __fastcall sub_14043B3F0(__int64(__fastcall** a1)(), unsigned int a2)
{
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rdi
	__int64(__fastcall * *v6)(); // [rsp+30h] [rbp+8h] BYREF

	v6 = a1;
	sub_1405FCCB0(*(_QWORD*)qword_140C65B80);
	if (a2)
	{
		while (1)
		{
			if (qword_140C63840)
			{
				v3 = qword_140C63840(off_140A6E3E8, a2, qword_140C63858);
			}
			else
			{
				if (dword_140C64634 || (int)sub_14024D920() < 0)
					return;
				v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, a2);
			}
			v5 = v3;
			if (v3)
			{
				v6 = off_140B66F70;
				sub_14043B4E0(v4, a2, (__int64)&unk_140C7CCB0, (unsigned int(__fastcall***)(_QWORD, __int64)) & v6);
				a2 = *(_DWORD*)(v5 + 8);
				if (a2)
					continue;
			}
			return;
		}
	}
}
// 14043B480: variable 'v4' is possibly undefined
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140B66F70: using guessed type __int64 (__fastcall *off_140B66F70[2])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65B80: using guessed type __int64 qword_140C65B80;

