//----- (00000001405A71B0) ----------------------------------------------------
void __fastcall sub_1405A71B0(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // rsi
	__int64 v4; // rdi
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rbp
	unsigned int v12; // eax
	__int64 v13; // rcx
	int v14; // eax
	_DWORD* v15; // r10
	unsigned int v16; // ecx
	unsigned int v17; // eax
	int v18; // eax
	int v19; // ebx
	int v20; // [rsp+20h] [rbp-28h] BYREF
	__int64 v21; // [rsp+28h] [rbp-20h]
	void(__fastcall * v22)(__int64, __int64); // [rsp+30h] [rbp-18h]
	__int64 v23; // [rsp+38h] [rbp-10h]
	unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

	v24 = a1;
	v3 = qword_140C65898;
	v4 = a2;
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v5 = *(_QWORD*)(qword_140C65898 + 28096);
		v6 = v5;
		v7 = *(_QWORD*)(v5 + 8);
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < (unsigned int)v4)
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (v6 == v5 || (v24 = v6, (unsigned int)v4 < *(_DWORD*)(v6 + 32)))
			v24 = v5;
		if (v24 == v5)
		{
			v24 = __PAIR64__(a3, v4);
			sub_140032F50(qword_140C65898 + 28088, (__int64)&v20, &v24);
		}
		else
		{
			*(_DWORD*)(v24 + 36) += a3;
		}
		v8 = *(_QWORD*)(v3 + 28064);
		v9 = v8;
		v10 = *(_QWORD*)(v8 + 8);
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < (unsigned int)v4)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v9 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		if (v9 == v8 || (v24 = v9, (unsigned int)v4 < *(_DWORD*)(v9 + 32)))
			v24 = v8;
		if (v24 != v8)
		{
			v11 = *(_QWORD*)(v24 + 40);
			v12 = sub_1403BAD30(v3, v4, *(_BYTE*)(v3 + 28140));
			sub_1407A16F0(v13, v12);
			v14 = sub_1405A76A0(v3, v4);
			v16 = *(_DWORD*)(v11 + 4);
			v17 = *v15 + v14;
			if (v16 > v17)
				v16 = v17;
			*(_DWORD*)(v11 + 4) = v16;
			if (v16 >= v17)
			{
				if (*(_QWORD*)(v11 + 24))
					sub_140195D70(v11 + 8);
			}
			else if (!*(_QWORD*)(v11 + 24))
			{
				v18 = v15[1];
				v20 = 1;
				v19 = (int)(float)((float)v18 * *(float*)(*(_QWORD*)(v3 + 120) + 2564i64));
				v21 = sub_14001C280(v3);
				v23 = v4;
				v22 = sub_1405A7090;
				sub_140195960(v11 + 8, v19, (__int64)&v20, 4);
			}
		}
	}
}
// 1405A72AF: variable 'v13' is possibly undefined
// 1405A72C4: variable 'v15' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

