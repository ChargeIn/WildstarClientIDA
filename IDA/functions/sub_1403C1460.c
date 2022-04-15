//----- (00000001403C1460) ----------------------------------------------------
__int64 __fastcall sub_1403C1460(__int64 a1, int* a2)
{
	int v2; // eax
	unsigned int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rbx
	unsigned int v8; // eax
	unsigned int* v9; // r8
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	__int64 v12; // [rsp+28h] [rbp-10h]

	v2 = *a2;
	if (*a2 >= 300)
		return 2147500037i64;
	v5 = a2[1];
	if (v5 == -1 || !v2 && v5 >= 0x1F)
		return 2147500037i64;
	v6 = sub_1403AC780(a1 + 160, a2);
	v7 = v6;
	if (!v6)
		return 2147500037i64;
	if ((*(_BYTE*)(v6 + 128) & 0x10) != 0)
	{
		v8 = 72;
	LABEL_11:
		sub_1403CC530(a1, v8);
		return 2147500037i64;
	}
	v9 = *(unsigned int**)(v6 + 72);
	if (!v9)
		v9 = (unsigned int*)(*(_QWORD*)(v6 + 64) + 8i64);
	v8 = sub_1403D67D0(qword_140C65898, *(unsigned int**)(v6 + 64), v9);
	if (v8)
		goto LABEL_11;
	v11 = 0i64;
	v12 = 0i64;
	v11 = *(_QWORD*)a2;
	v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 48i64))(v7);
	sub_1403F4900(a1, 0x15Eu, (__int64)&v11);
	*(_DWORD*)(qword_140C65898 + 28568) = 1;
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

