//----- (000000014039C720) ----------------------------------------------------
void __fastcall sub_14039C720(__int64 a1, int a2, int a3, unsigned int a4)
{
	__int64* v6; // r14
	__int64 v8; // rcx
	int v9; // edi
	int v10; // edx
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rax
	int* v15; // rax
	int v16; // [rsp+30h] [rbp-38h] BYREF
	__int64 v17; // [rsp+38h] [rbp-30h]
	int(__fastcall * v18)(__int64); // [rsp+40h] [rbp-28h]
	__int64 v19; // [rsp+48h] [rbp-20h]
	__int64 v20; // [rsp+70h] [rbp+8h]

	v6 = (__int64*)(qword_140C65898 + 29048);
	v8 = *(_QWORD*)(qword_140C65898 + 29048);
	if (v8)
	{
		while (*(_DWORD*)(v8 + 4) != a3 || *(_DWORD*)v8 != a2 || *(_DWORD*)(v8 + 8) != a4)
		{
			v8 = *(_QWORD*)(v8 + 104);
			if (!v8)
				goto LABEL_6;
		}
		v10 = dword_140C6664C;
		*(_DWORD*)(v8 + 16) = dword_140C636A8;
		v17 = v8;
		v18 = sub_1407A0760;
		v16 = 0;
		v19 = 0i64;
		sub_140195960(v8 + 24, v10, (__int64)&v16, 4);
	}
	else
	{
	LABEL_6:
		v9 = 0;
		if (a4)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898)
			{
				v11 = *(_QWORD*)(qword_140C65898 + 32024);
				v12 = v11;
				v13 = *(_QWORD*)(v11 + 8);
				while (v13)
				{
					if (*(_DWORD*)(v13 + 32) < a4)
					{
						v13 = *(_QWORD*)(v13 + 24);
					}
					else
					{
						v12 = v13;
						v13 = *(_QWORD*)(v13 + 16);
					}
				}
				if (v12 == v11 || (v20 = v12, a4 < *(_DWORD*)(v12 + 32)))
					v20 = *(_QWORD*)(qword_140C65898 + 32024);
				if (v20 != v11)
				{
					v14 = *(_QWORD*)(v20 + 40);
					if (v14)
						goto LABEL_22;
				}
			}
			v14 = sub_1407A0FD0(qword_140C65B70, a4);
			if (v14)
				LABEL_22:
			v9 = *(_DWORD*)(*(_QWORD*)(v14 + 112) + 4i64);
		}
		v15 = sub_14018B280(112i64, 0);
		if (v15)
			sub_1407A0610((__int64)v15, a2, a3, a4, v9, v6);
	}
}
// 14039C7E1: conditional instruction was optimized away because ecx.4==1
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C6664C: using guessed type int dword_140C6664C;

