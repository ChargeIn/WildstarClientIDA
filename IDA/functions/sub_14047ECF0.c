#include "../winhttp.h"

//----- (000000014047ECF0) ----------------------------------------------------
__int64 __fastcall sub_14047ECF0(__int64 a1, __int64 a2)
{
	__int64 v3; // rsi
	int* v5; // rdi
	__int64 v6; // rbx
	int v7[4]; // [rsp+20h] [rbp-48h] BYREF
	int v8; // [rsp+30h] [rbp-38h] BYREF
	int v9; // [rsp+34h] [rbp-34h]
	int v10; // [rsp+38h] [rbp-30h]

	*(_OWORD*)a2 = *(_OWORD*)(a1 + 4528);
	*(_OWORD*)(a2 + 16) = *(_OWORD*)(a1 + 4544);
	*(_OWORD*)(a2 + 32) = *(_OWORD*)(a1 + 4560);
	*(_OWORD*)(a2 + 48) = *(_OWORD*)(a1 + 4576);
	*(float*)(a2 + 52) = *(float*)(a2 + 52) + 2.2;
	v3 = *(_QWORD*)(a1 + 5864);
	if (!v3)
		return a2;
	if (*(_DWORD*)(a1 + 128) == 27)
	{
		(*(void(__fastcall**)(_QWORD, __int64, int*))(*(_QWORD*)v3 + 872i64))(*(_QWORD*)(a1 + 5864), 14i64, &v8);
		*(_DWORD*)(a2 + 48) = v8;
		*(_DWORD*)(a2 + 52) = v9;
		*(_DWORD*)(a2 + 56) = v10;
	}
	else
	{
		v8 = 15;
		v5 = &v8;
		v9 = 1;
		v10 = 25;
		v6 = 0i64;
		while (!(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 848i64))(v3, (unsigned int)*v5))
		{
			v6 = (unsigned int)(v6 + 1);
			++v5;
			if ((unsigned int)v6 >= 3)
				return a2;
		}
		(*(void(__fastcall**)(__int64, _QWORD, int*, _QWORD))(*(_QWORD*)v3 + 872i64))(
			v3,
			(unsigned int)*(&v8 + v6),
			v7,
			0i64);
		*(_DWORD*)(a2 + 48) = v7[0];
		*(_DWORD*)(a2 + 52) = v7[1];
		*(_DWORD*)(a2 + 56) = v7[2];
	}
	return a2;
}

