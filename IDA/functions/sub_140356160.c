#include "../winhttp.h"

//----- (0000000140356160) ----------------------------------------------------
__int64 __fastcall sub_140356160(_QWORD* a1)
{
	__int64 i; // rbx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 j; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rcx
	__int64 k; // rax
	__int64 m; // rax
	__int64 n; // rbx
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	void(__fastcall * *v13)(_QWORD); // rax

	for (i = a1[630]; i; i = a1[630])
	{
		if (*(_QWORD*)(i + 1184))
		{
			sub_140378110(i);
			sub_1403786A0(i);
			v3 = *(_QWORD**)(i + 1184);
			if (v3)
				*v3 = *(_QWORD*)(i + 1192);
			v4 = *(_QWORD*)(i + 1192);
			if (v4)
				*(_QWORD*)(v4 + 1184) = *(_QWORD*)(i + 1184);
			*(_QWORD*)(i + 1184) = 0i64;
			*(_QWORD*)(i + 1192) = 0i64;
		}
	}
	for (j = a1[658]; j; j = a1[658])
	{
		if (*(_QWORD*)(j + 1040))
		{
			sub_14038BDB0(j);
			sub_14038C060(j);
			v6 = *(_QWORD**)(j + 1040);
			if (v6)
				*v6 = *(_QWORD*)(j + 1048);
			v7 = *(_QWORD*)(j + 1048);
			if (v7)
				*(_QWORD*)(v7 + 1040) = *(_QWORD*)(j + 1040);
			*(_QWORD*)(j + 1040) = 0i64;
			*(_QWORD*)(j + 1048) = 0i64;
		}
	}
	for (k = a1[669]; k; k = a1[669])
		sub_14038DC80(k);
	for (m = a1[672]; m; m = a1[672])
		sub_14038E9A0(m);
	for (n = a1[685]; n; n = a1[685])
	{
		(**(void(__fastcall***)(__int64))n)(n);
		sub_14037AA70(n);
		*(_DWORD*)(n + 12) = 0;
		if (*(float*)(n + 80) <= *(float*)(n + 68))
			*(_DWORD*)(n + 12) = 1;
		if (*(float*)(n + 84) >= *(float*)(n + 52))
			*(_DWORD*)(n + 12) |= 2u;
		v11 = *(_QWORD**)(n + 104);
		if (v11)
			*v11 = *(_QWORD*)(n + 112);
		v12 = *(_QWORD*)(n + 112);
		if (v12)
			*(_QWORD*)(v12 + 104) = *(_QWORD*)(n + 104);
		v13 = *(void(__fastcall***)(_QWORD))n;
		*(_QWORD*)(n + 104) = 0i64;
		*(_QWORD*)(n + 112) = 0i64;
		v13[1](n);
	}
	return 0i64;
}

