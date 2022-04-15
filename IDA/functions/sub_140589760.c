//----- (0000000140589760) ----------------------------------------------------
void __fastcall sub_140589760(__int64 a1)
{
	__int64* v1; // rcx
	__int64 v2; // r14
	__int64 v3; // rdi
	__int64 v4; // rbp
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	int v8; // edx
	__int64* v9; // rbx
	__int64 v10; // rbp
	unsigned __int64 v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // r15
	__int16* v14; // rax
	__int64 v15; // [rsp+30h] [rbp-98h] BYREF
	__int64 v16; // [rsp+38h] [rbp-90h]
	__int64 v17; // [rsp+40h] [rbp-88h]
	__int64 v18; // [rsp+58h] [rbp-70h]
	__int64 v19; // [rsp+60h] [rbp-68h]
	__int64 v20; // [rsp+78h] [rbp-50h]
	__int64 v21; // [rsp+98h] [rbp-30h]
	__int64 v22; // [rsp+E0h] [rbp+18h] BYREF

	sub_14040B680(&v15, a1, 1);
	v2 = v16;
	v3 = v18;
	if (v16 == v17 || v18 == v19)
	{
		v8 = 240220;
	}
	else
	{
		v4 = qword_140C658A0;
		v22 = v16;
		v5 = (*(__int64(__fastcall**)(__int64*))(qword_140C658A0 + 40))(&v22);
		v1 = *(__int64**)(v4 + 32);
		v6 = v5;
		v7 = (_QWORD*)v1[v5 % *(_QWORD*)(v4 + 24)];
		if (v7)
		{
			while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v4 + 48))(&v22, v7 + 2))
			{
				v7 = (_QWORD*)v7[1];
				if (!v7)
					goto LABEL_7;
			}
			v9 = v7 + 3;
			if (v9)
			{
				v10 = *v9;
				if (*v9)
				{
					v11 = qword_140C7DE20;
					v12 = 0i64;
					if (qword_140C7DE20)
					{
						v13 = qword_140C7DE18;
						while (sub_140580040(*(__int64**)(v13 + 8 * v12)) != v10)
						{
							if (++v12 >= v11)
							{
								v8 = 240550;
								goto LABEL_18;
							}
						}
						v1 = *(__int64**)(v13 + 8 * v12);
						if (v1)
						{
							sub_14057E950(v1, v3);
							goto LABEL_19;
						}
					}
				}
			}
		}
	LABEL_7:
		v8 = 240550;
	}
LABEL_18:
	v14 = sub_14034BDD0((__int64)v1, v8);
	sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v14, 0, 0i64);
LABEL_19:
	if (v21)
		sub_14018B900(v21, 0);
	if (v20)
		sub_14018B900(v20, 0);
	if (v3)
		sub_14018B900(v3, 0);
	if (v2)
		sub_14018B900(v2, 0);
}
// 140589865: variable 'v1' is possibly undefined
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

