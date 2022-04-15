#include "../winhttp.h"

//----- (00000001404586E0) ----------------------------------------------------
__int64 __fastcall sub_1404586E0(__int64 a1, int a2, __int64 a3, unsigned __int16 a4, int a5)
{
	double v5; // xmm2_8
	int v6; // ebp
	unsigned int v9; // ebx
	unsigned int v10; // esi
	int v11; // eax
	__int64 v12; // r9
	int v13; // ebx
	__int64 i; // rbx
	__int64 v16; // [rsp+20h] [rbp-78h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-68h] BYREF
	__int128 v18; // [rsp+38h] [rbp-60h]
	__int64(__fastcall * *v19)(); // [rsp+50h] [rbp-48h] BYREF
	__int128 v20; // [rsp+58h] [rbp-40h]
	__int64 v21; // [rsp+A0h] [rbp+8h] BYREF
	int v22; // [rsp+B8h] [rbp+20h] BYREF

	v6 = dword_140C636A8;
	*(_DWORD*)(a1 + 3416) = 1;
	*(_QWORD*)(a1 + 3408) = 0i64;
	*(_QWORD*)(a1 + 3840) = 0i64;
	v9 = a4;
	v22 = v6;
	sub_14079AB90(a1 + 3420, a2, v6);
	v10 = 0;
	if (v9)
	{
		while ((int)sub_1405B4AB0(a1, (unsigned int*)&v22, (unsigned int*)(a3 + 72i64 * v10), a1 + 3420, 0i64) >= 0)
		{
			if (++v10 >= v9)
			{
				v6 = v22;
				goto LABEL_5;
			}
		}
		*(_QWORD*)&v18 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = *(unsigned int*)(a1 + 8);
		v19 = TlsValue;
		v20 = v18;
		v21 = 0x141E02480i64;
		LODWORD(v16) = *(_DWORD*)(a3 + 72i64 * v10);
		v13 = sub_1401971E0(&dword_140C8AC80, 5, &v21, v12, v16, &v19);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
		if (v13)
			DebugBreak();
		return 2147500037i64;
	}
	else
	{
	LABEL_5:
		if (a5)
			*(_DWORD*)(a1 + 3420) = 0;
		v11 = *(_DWORD*)(a1 + 4232);
		*(_QWORD*)(a1 + 4896) = 2i64;
		*(_DWORD*)(a1 + 4904) = 0;
		*(_QWORD*)(a1 + 4920) = 0i64;
		*(_DWORD*)(a1 + 4928) = 1065353216;
		*(_DWORD*)(a1 + 4892) = v11;
		*(_QWORD*)(a1 + 4808) = 0i64;
		*(_QWORD*)(a1 + 4816) = 0i64;
		*(_QWORD*)(a1 + 4872) = 0i64;
		*(_QWORD*)(a1 + 4824) = 0i64;
		*(_QWORD*)(a1 + 4832) = 0i64;
		*(_QWORD*)(a1 + 4840) = 0i64;
		*(_QWORD*)(a1 + 4848) = 0i64;
		*(_QWORD*)(a1 + 4856) = 0i64;
		*(_QWORD*)(a1 + 4864) = 0i64;
		*(_QWORD*)(a1 + 4880) = 0i64;
		*(_DWORD*)(a1 + 4908) = v6;
		*(_DWORD*)(a1 + 4912) = 0;
		*(_DWORD*)(a1 + 4888) = 0;
		*(_DWORD*)(a1 + 3648) = 0;
		*(_QWORD*)(a1 + 3664) = sub_1405B9140;
		*(_QWORD*)(a1 + 3656) = a1;
		*(_QWORD*)(a1 + 3672) = 0i64;
		if (*(_DWORD*)(a1 + 3572) == 2 && *(_QWORD*)(a1 + 3592))
		{
			if (*(_QWORD*)(a1 + 3656) || *(_QWORD*)(a1 + 3664))
				sub_140195960(a1 + 3576, *(_DWORD*)(a1 + 3568) != 0 ? 0x96 : 0, a1 + 3648, 4);
			else
				sub_140195D70(a1 + 3576);
		}
		*(_DWORD*)(a1 + 3680) = 0;
		*(_QWORD*)(a1 + 3696) = sub_1405B9140;
		*(_QWORD*)(a1 + 3688) = a1;
		*(_QWORD*)(a1 + 3704) = 0i64;
		if (*(_DWORD*)(a1 + 3572) == 3 && *(_QWORD*)(a1 + 3592))
		{
			if (*(_QWORD*)(a1 + 3688) || *(_QWORD*)(a1 + 3696))
				sub_140195960(a1 + 3576, 0, a1 + 3680, 4);
			else
				sub_140195D70(a1 + 3576);
		}
		sub_1405B4F50(a1, v6);
		sub_1405B5070(a1, v6);
		sub_1405B82A0(a1, v6, v5);
		for (i = *(_QWORD*)(a1 + 3848); i; i = *(_QWORD*)(i + 3864))
			sub_1405B4EF0(i, v6, v5);
		*(_DWORD*)(a1 + 4932) = 39;
		*(_QWORD*)(a1 + 4992) = 1i64;
		*(_DWORD*)(a1 + 5008) = 0;
		return 0i64;
	}
}
// 14045890D: variable 'v16' is possibly undefined
// 1404589D3: variable 'v5' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C8AC80: using guessed type _DWORD dword_140C8AC80;

