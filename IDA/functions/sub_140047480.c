//----- (0000000140047480) ----------------------------------------------------
__int64 __fastcall sub_140047480(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdx
	int v6; // r10d
	__int64 v7; // rcx
	int v8; // eax
	unsigned int v9; // ebp
	__int64 v10; // rsi
	__int64 v11; // rdi
	__int64 v12; // rbx
	unsigned __int16* v13; // r9
	int v14; // eax
	__int64 v15; // r8
	int v16; // ecx
	__int64* v17; // rax
	__int64 v18; // r8
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-38h] BYREF
	int v21; // [rsp+28h] [rbp-30h]
	__int64 v22; // [rsp+30h] [rbp-28h]
	int v23; // [rsp+38h] [rbp-20h]

	v1 = a1;
	v22 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v20 = off_140B569F0;
	v23 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v21 = v6;
	v7 = qword_140C66E40;
	v8 = *(_DWORD*)(qword_140C7AAC0 + 8) - 1;
	if (*(_DWORD*)(qword_140C66E40 + 224) > v8)
	{
		v10 = *(_QWORD*)(qword_140C66E40 + 224);
		if (v10)
		{
			v11 = 8i64 * v8;
			v12 = 0i64;
			while (1)
			{
				v13 = *(unsigned __int16**)(*(_QWORD*)(v12 + *(_QWORD*)(v7 + 216)) + v11);
				if (v13 != (unsigned __int16*)&unk_1409D1144)
				{
					if (v13)
					{
						LOWORD(v14) = *v13;
						v15 = 0i64;
						if (!*v13)
						{
							do
							{
								if (!(_WORD)v14)
									break;
								v14 = v13[v15 + 1];
								v16 = *((unsigned __int16*)&unk_1409D1144 + ++v15);
							} while (v14 == v16);
						}
					}
				}
				sub_1400FAD30((__int64)&v20);
				v12 += 16i64;
				if (!--v10)
					break;
				v7 = qword_140C66E40;
			}
			v1 = v22;
			v6 = v21;
		}
		v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v6);
		v18 = *(_QWORD*)(v1 + 16);
		v5 = *v17;
		v9 = 1;
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	else
	{
		v9 = 0;
	}
	sub_1400579E0(v1, v5, v6);
	return v9;
}
// 1400475F1: variable 'v5' is possibly undefined
// 1400475F1: variable 'v6' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C66E40: using guessed type __int64 qword_140C66E40;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

