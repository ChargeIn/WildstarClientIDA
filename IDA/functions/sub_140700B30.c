//----- (0000000140700B30) ----------------------------------------------------
__int64 __fastcall sub_140700B30(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // r9
	unsigned int v4; // ebx
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rdx
	int* v8; // rax
	__int64 v9; // rax
	unsigned __int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+58h] [rbp+10h]

	v2 = sub_140056D60(a1, 1u);
	v3 = *(_QWORD*)(qword_140C65898 + 32144);
	v4 = v2;
	v5 = *(_QWORD*)(v3 + 40);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v14 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v14 = *(_QWORD*)(v3 + 40);
	if (v14 != *(_QWORD*)(v3 + 40) && v14 != -40)
	{
		v8 = (int*)sub_1406622C0((__int64)a1, 2);
		if (v8)
		{
			v9 = sub_1403D90D0(qword_140C65898, *v8);
			if (v9)
			{
				v11 = 0i64;
				v12 = 0i64;
				v13 = 0i64;
				v11 = __PAIR64__(v4, *(_DWORD*)(v14 + 44));
				v12 = *(_QWORD*)(v9 + 416);
				v13 = *(_QWORD*)(v9 + 424);
				sub_1403F4900(qword_140C65898, 0xB5u, (__int64)&v11);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

