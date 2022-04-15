//----- (000000014046A3D0) ----------------------------------------------------
void __fastcall sub_14046A3D0(__int64 a1, int a2, int a3, int a4, int a5)
{
	__int64* v5; // r15
	__int64 v8; // rbx
	int* v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rbx
	__int64 v14; // rdx
	BOOL v15; // r8d
	__int64 v16; // rax
	__int64 v17; // rax
	unsigned int v18; // r10d
	__int64 v19; // rdi
	unsigned int v20; // eax
	unsigned int v21; // eax
	int v22; // [rsp+40h] [rbp-38h] BYREF
	__int64 v23; // [rsp+48h] [rbp-30h]
	int(__fastcall * v24)(__int64); // [rsp+50h] [rbp-28h]
	__int64 v25; // [rsp+58h] [rbp-20h]

	v5 = (__int64*)(a1 + 5640);
	v8 = *(_QWORD*)(a1 + 5640);
	if (v8)
	{
		while (a2 != *(_DWORD*)(v8 + 4)
			|| a4 != *(_DWORD*)(v8 + 12) && a2
			|| !*(_QWORD*)(v8 + 32)
			|| !(unsigned int)sub_140195F70(v8 + 16))
		{
			v8 = *(_QWORD*)(v8 + 136);
			if (!v8)
				goto LABEL_8;
		}
		if (a5)
		{
			if (*(_DWORD*)(v8 + 4) || a5 >= (int)sub_140195F70(v8 + 16))
			{
				if (*(_QWORD*)(v8 + 32))
					sub_140195D70(v8 + 16);
				*(_DWORD*)v8 = dword_140C636A8;
				*(_DWORD*)(v8 + 88) = a5;
				v24 = sub_1407A0390;
				v22 = 0;
				v23 = v8;
				v25 = 0i64;
				sub_140195960(v8 + 16, a5, (__int64)&v22, 4);
			}
		}
		else
		{
			sub_1407A0390(v8);
		}
	}
	else
	{
	LABEL_8:
		if (a5)
		{
			v11 = sub_14018B280(144i64, 0);
			v12 = 0i64;
			if (v11)
				v13 = sub_1407A01C0((__int64)v11, a2, a3, a4, a5, v5);
			else
				v13 = 0i64;
			v14 = qword_140C65898;
			v15 = 1;
			v16 = *(_QWORD*)(qword_140C65898 + 120);
			if (v16 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(v16 + 8)
				|| (v17 = *(_QWORD*)(qword_140C65898 + 25744)) != 0 && *(_DWORD*)(a1 + 8) == *(_DWORD*)(v17 + 8))
			{
				*(_DWORD*)(v13 + 96) = 1;
				*(_QWORD*)(v13 + 104) = a1;
				*(_QWORD*)(v13 + 112) = sub_14046B720;
				*(_QWORD*)(v13 + 120) = v13;
			}
			if (v13)
			{
				v18 = *(_DWORD*)(v13 + 8);
				if (v18)
				{
					if (*(_QWORD*)(v14 + 120) != a1)
						v15 = *(_QWORD*)(v14 + 25744) == a1;
					if (v15)
						v12 = v14;
					if (v12 && (v19 = sub_1405A5B90(v12, v18)) != 0 || (v19 = sub_1407A0FD0(qword_140C65B70, v18)) != 0)
					{
						v20 = sub_14046A810(a1, v19, v13);
						v21 = sub_14046A890(a1, v19, v20);
						sub_1407A0320(v13, v21);
					}
				}
			}
		}
	}
}
// 14046A59B: variable 'v18' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

