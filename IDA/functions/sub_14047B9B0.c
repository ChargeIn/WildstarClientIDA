//----- (000000014047B9B0) ----------------------------------------------------
__int64 __fastcall sub_14047B9B0(__int64 a1, int a2)
{
	unsigned __int64 v3; // rcx
	__int64 v5; // rdx
	__int64 v6; // r8
	_DWORD* i; // rax
	__int64 v9; // r8
	__int64 v10; // rdx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-38h] BYREF
	int v12; // [rsp+28h] [rbp-30h]
	int v13; // [rsp+2Ch] [rbp-2Ch]
	int v14; // [rsp+30h] [rbp-28h]
	int v15; // [rsp+34h] [rbp-24h]
	int v16; // [rsp+38h] [rbp-20h]
	int v17; // [rsp+40h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 408);
	v5 = 0i64;
	if (v3)
	{
		v6 = *(_QWORD*)(a1 + 400);
		for (i = (_DWORD*)(v6 + 8); *i != a2; i += 3)
		{
			if (++v5 >= v3)
				return 0i64;
		}
		if (!*(_DWORD*)(v6 + 12 * v5) || (*(_DWORD*)(*(_QWORD*)(a1 + 184) + 96i64) & 0x2000) != 0)
			*(_DWORD*)(a1 + 3328) = 1;
		sub_140480DB0(a1 + 400, v5);
		v9 = qword_140C65898;
		*(_DWORD*)(a1 + 6312) = 1;
		v10 = *(_QWORD*)(v9 + 120);
		if (v10)
		{
			if (*(_DWORD*)(a1 + 8) == *(_DWORD*)(v10 + 8))
				*(_DWORD*)(v9 + 28568) = 1;
			if (a2 == *(_DWORD*)(v10 + 8))
			{
				v12 = a2;
				v13 = 25;
				v14 = a2;
				v15 = 0;
				v11 = off_140B6F4F0;
				v16 = 8;
				v17 = 1;
				sub_14060B2B0((int*)&v11);
			}
		}
	}
	return 0i64;
}
// 14047BA65: conditional instruction was optimized away because rdx.8!=0
// 140B6F4F0: using guessed type __int64 (__fastcall *off_140B6F4F0[207])();
// 140C65898: using guessed type __int64 qword_140C65898;

