//----- (0000000140675BB0) ----------------------------------------------------
__int64 __fastcall sub_140675BB0(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rax
	unsigned int v5; // r15d
	__int64 v6; // rbp
	__int64 v7; // rbx
	__int64 v10; // rsi
	__int64 v11; // rcx
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // r9
	int v16; // r14d
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64* v19; // rax
	__int64 v20; // rax
	int v21; // edi
	unsigned int v22; // edx
	int v23; // ebp
	__int64 v24; // rax
	__int64 v25; // r8
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64* v28; // rax
	__int64 v29; // rax
	__int64 v30; // rdx
	__int64 v31; // rax
	__int64 i; // rax
	__int64 j; // rcx
	__int64 v35; // [rsp+30h] [rbp-78h] BYREF
	__int64 v36; // [rsp+38h] [rbp-70h] BYREF
	__int64 v37; // [rsp+40h] [rbp-68h] BYREF
	__int64(__fastcall * *v38)(); // [rsp+48h] [rbp-60h] BYREF
	int v39; // [rsp+50h] [rbp-58h]
	__int64 v40; // [rsp+58h] [rbp-50h]
	int v41; // [rsp+60h] [rbp-48h]
	__int64 v43; // [rsp+C0h] [rbp+18h] BYREF
	__int64 v44; // [rsp+C8h] [rbp+20h]

	v44 = a4;
	v4 = *(_QWORD*)(a3 + 8);
	v5 = 0;
	v6 = a4;
	v7 = *(_QWORD*)(v4 + 16);
	if (v7 != v4)
	{
		do
		{
			v10 = *a1;
			v38 = off_140B569F0;
			v41 = 1;
			v11 = *(_QWORD*)(v10 + 32);
			v40 = v10;
			if (*(_QWORD*)(v11 + 120) >= *(_QWORD*)(v11 + 112))
				sub_14005E2C0(v10);
			v12 = *(_QWORD*)(v10 + 16);
			v13 = sub_14005C1B0(v10, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(v10 + 16) += 16i64;
			v14 = sub_1400578C0(v10);
			v15 = *(_QWORD*)(v6 + 8);
			v16 = v14;
			v39 = v14;
			v17 = *(_QWORD*)(v15 + 8);
			v18 = v15;
			while (v17)
			{
				if (*(_DWORD*)(v17 + 32) < *(_DWORD*)(v7 + 32))
				{
					v17 = *(_QWORD*)(v17 + 24);
				}
				else
				{
					v18 = v17;
					v17 = *(_QWORD*)(v17 + 16);
				}
			}
			if (v18 == v15 || *(_DWORD*)(v7 + 32) < *(_DWORD*)(v18 + 32))
			{
				v35 = v15;
				v19 = &v35;
			}
			else
			{
				v43 = v18;
				v19 = &v43;
			}
			v20 = *v19;
			if (v20 == v15)
				v21 = 0;
			else
				v21 = *(_DWORD*)(v20 + 36);
			v22 = *(_DWORD*)(v7 + 32);
			v23 = *(_DWORD*)(v7 + 36);
			if (v22)
			{
				if (!*(_QWORD*)(qword_140C65898 + 120) || !qword_140C65898)
					goto LABEL_31;
				v25 = *(_QWORD*)(qword_140C65898 + 32024);
				v26 = v25;
				v27 = *(_QWORD*)(v25 + 8);
				while (v27)
				{
					if (*(_DWORD*)(v27 + 32) < v22)
					{
						v27 = *(_QWORD*)(v27 + 24);
					}
					else
					{
						v26 = v27;
						v27 = *(_QWORD*)(v27 + 16);
					}
				}
				if (v26 == v25 || v22 < *(_DWORD*)(v26 + 32))
				{
					v37 = *(_QWORD*)(qword_140C65898 + 32024);
					v28 = &v37;
				}
				else
				{
					v36 = v26;
					v28 = &v36;
				}
				v29 = *v28;
				if (v29 == v25 || (v24 = *(_QWORD*)(v29 + 40)) == 0)
					LABEL_31:
				v24 = sub_1407A0FD0(qword_140C65B70, v22);
			}
			else
			{
				v24 = 0i64;
			}
			if ((unsigned int)sub_140675E20((__int64)a1, (__int64)&v38, v24, v23, v21))
			{
				sub_1400FB1D0(a2);
				v5 = 1;
			}
			sub_1400579E0(v10, v30, v16);
			v31 = *(_QWORD*)(v7 + 24);
			if (v31)
			{
				v7 = *(_QWORD*)(v7 + 24);
				for (i = *(_QWORD*)(v31 + 16); i; i = *(_QWORD*)(i + 16))
					v7 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v7 = j;
				if (*(_QWORD*)(v7 + 24) != j)
					v7 = j;
			}
			v6 = v44;
		} while (v7 != *(_QWORD*)(a3 + 8));
	}
	return v5;
}
// 140675D7F: variable 'v30' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

