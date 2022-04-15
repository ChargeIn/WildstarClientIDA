//----- (0000000140722ED0) ----------------------------------------------------
__int64 __fastcall sub_140722ED0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // rcx
	__int64 v7; // rdx
	unsigned int v8; // r8d
	__int64 v9; // r9
	unsigned int v10; // eax
	unsigned int v11; // edi
	int v12; // edx
	__int64 v13; // rax
	int v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v16)(_QWORD); // [rsp+30h] [rbp-18h]
	__int64 v17; // [rsp+38h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(a1 + 16);
	if (v2 == v4)
		return 0i64;
	if (*(unsigned int*)(a1 + 64) >= (unsigned __int64)((v4 - v2) / 40))
	{
		*(_DWORD*)(a1 + 64) = 0;
		v7 = (*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) / 40i64;
		if ((__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 2 != v7)
		{
			sub_1402D4AA0(a1 + 32, v7);
			v8 = 0;
			if ((*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) / 40i64)
			{
				v9 = 0i64;
				do
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 40) + 4 * v9) = v8++;
					v9 = v8;
				} while (v8 < (unsigned __int64)((*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) / 40i64));
			}
		}
	}
	if (*(_QWORD*)(a1 + 40) == *(_QWORD*)(a1 + 48))
		return 0i64;
	if ((*(_BYTE*)(*(_QWORD*)(a1 + 72) + 4i64) & 1) != 0)
		v10 = sub_140723060((_QWORD*)a1, a2);
	else
		v10 = sub_1407232A0(a1, a2);
	v11 = v10;
	if (v10)
	{
		v12 = *(_DWORD*)(*(_QWORD*)(a1 + 72) + 12i64);
		if (!v12)
		{
			v13 = sub_140200220(0x1F5u);
			if (v13)
				v12 = *(_DWORD*)(v13 + 4);
			else
				v12 = 0;
		}
		v14 = 0;
		v15 = a1;
		v16 = nullsub_1;
		v17 = 0i64;
		sub_140195960(a1 + 80, v12, (__int64)&v14, 4);
	}
	return v11;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);

