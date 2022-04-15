#include "../winhttp.h"

//----- (0000000140839BD0) ----------------------------------------------------
__int64 __fastcall sub_140839BD0(__int64 a1, int a2, int a3)
{
	int v3; // eax
	int v7; // eax
	unsigned int v8; // edx
	__int64* v9; // rax
	__int64* v10; // rdi
	unsigned int v11; // edx
	__int64* v12; // rax
	__int64* v13; // rdi

	v3 = *(_DWORD*)(a1 + 200);
	if (v3)
	{
		v7 = v3 - 1;
		*(_DWORD*)(a1 + 200) = v7;
		if (!v7)
		{
			if (*(_DWORD*)(a1 + 96) != 1)
				sub_140839AD0(a1, a2, a3);
			sub_14082EDB0((__int64)qword_140C61B68, *(_DWORD*)(a1 + 136));
			v8 = *(_DWORD*)(a1 + 152);
			if (v8)
			{
				v9 = (__int64*)sub_140830F00(qword_140C61BA8, v8, 0);
				v10 = v9;
				if (v9)
				{
					sub_140854270(v9, *(_QWORD*)(a1 + 104), *(_DWORD*)(a1 + 136), a2, a3);
					(*(void(__fastcall**)(__int64*))(*v10 + 16))(v10);
				}
			}
			v11 = *(_DWORD*)(a1 + 176);
			if (v11)
			{
				v12 = (__int64*)sub_140830F00(qword_140C61BA8, v11, 0);
				v13 = v12;
				if (v12)
				{
					sub_140854270(v12, *(_QWORD*)(a1 + 104), *(_DWORD*)(a1 + 136), a2, a3);
					(*(void(__fastcall**)(__int64*))(*v13 + 16))(v13);
				}
			}
		}
	}
	return 1i64;
}

