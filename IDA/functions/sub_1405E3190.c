//----- (00000001405E3190) ----------------------------------------------------
void __fastcall sub_1405E3190(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v6; // rcx
	unsigned int v7; // edx
	__int64 v8; // rax
	int v9; // edx
	__int64 v10; // rax
	int v11; // edx
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // [rsp+20h] [rbp-A8h] BYREF
	__int64 v16; // [rsp+28h] [rbp-A0h]
	__int64 v17; // [rsp+30h] [rbp-98h]
	__int64 v18; // [rsp+40h] [rbp-88h] BYREF
	__int64 v19; // [rsp+48h] [rbp-80h]
	__int64 v20; // [rsp+68h] [rbp-60h]
	__int64 v21; // [rsp+70h] [rbp-58h]
	__int64 v22; // [rsp+88h] [rbp-40h]
	__int64 v23; // [rsp+A8h] [rbp-20h]

	sub_14040B680(&v18, a1, 0);
	v4 = v20;
	v5 = v22;
	v6 = qword_140C65898;
	if (v20 != v21)
	{
		v7 = 962;
		v15 = v20;
		v16 = v22;
		v17 = 0i64;
	LABEL_11:
		LODWORD(v17) = a3;
		sub_1403F4740(v6, v7, (__int64)&v15);
		goto LABEL_12;
	}
	v8 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v8)
	{
		v9 = *(_DWORD*)(v8 + 264);
		if (v9)
		{
			if (sub_1403D90D0(qword_140C65898, v9))
			{
				v6 = qword_140C65898;
				v10 = *(_QWORD*)(qword_140C65898 + 25744);
				if (v10 && (v11 = *(_DWORD*)(v10 + 264)) != 0)
				{
					v12 = sub_1403D90D0(qword_140C65898, v11);
					v6 = qword_140C65898;
					v13 = v12;
				}
				else
				{
					v13 = 0i64;
				}
				v15 = 0i64;
				v16 = 0i64;
				v17 = 0i64;
				v15 = *(_QWORD*)(v13 + 416);
				v14 = *(_QWORD*)(v13 + 424);
				v7 = 961;
				v16 = v14;
				goto LABEL_11;
			}
		}
	}
LABEL_12:
	if (v23)
		sub_14018B900(v23, 0);
	if (v5)
		sub_14018B900(v5, 0);
	if (v4)
		sub_14018B900(v4, 0);
	if (v19)
		sub_14018B900(v19, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;

