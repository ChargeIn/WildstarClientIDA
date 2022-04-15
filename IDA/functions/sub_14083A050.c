#include "../winhttp.h"

//----- (000000014083A050) ----------------------------------------------------
__int64 __fastcall sub_14083A050(__int64 a1, int a2, int a3, int a4)
{
	int v5; // edx
	unsigned int v9; // edx
	__int64* v10; // rax
	__int64* v11; // rdi
	unsigned int v12; // edx
	__int64* v13; // rax
	__int64* v14; // rdi
	__int64 v15; // rdx

	v5 = *(_DWORD*)(a1 + 136);
	*(_DWORD*)(a1 + 96) = 0;
	*(_DWORD*)(a1 + 200) = 0;
	sub_14082B920((__int64)qword_140C61B68, v5);
	v9 = *(_DWORD*)(a1 + 176);
	if (v9 && !a2)
	{
		v10 = (__int64*)sub_140830F00(qword_140C61BA8, v9, 0);
		v11 = v10;
		if (v10)
		{
			sub_1408551C0(v10, *(_QWORD*)(a1 + 104), *(_DWORD*)(a1 + 136), a3, a4);
			(*(void(__fastcall**)(__int64*))(*v11 + 16))(v11);
		}
		*(_DWORD*)(a1 + 176) = 0;
	}
	v12 = *(_DWORD*)(a1 + 152);
	if (v12)
	{
		v13 = (__int64*)sub_140830F00(qword_140C61BA8, v12, 0);
		v14 = v13;
		if (v13)
		{
			v15 = *(_QWORD*)(a1 + 104);
			if (a2)
				(*(void(__fastcall**)(__int64*, __int64, __int64*, _QWORD))(*v13 + 152))(
					v13,
					v15,
					v13,
					*(unsigned int*)(a1 + 136));
			else
				sub_1408551C0(v13, v15, *(_DWORD*)(a1 + 136), a3, a4);
			(*(void(__fastcall**)(__int64*))(*v14 + 16))(v14);
		}
	}
	return 1i64;
}

