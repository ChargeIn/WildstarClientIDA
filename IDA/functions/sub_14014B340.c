//----- (000000014014B340) ----------------------------------------------------
__int64 __fastcall sub_14014B340(_QWORD* a1)
{
	float* v2; // rsi
	char* v3; // r10
	int v4; // r8d
	const char* v5; // rdx
	char v6; // r9
	const char* v7; // rdx
	char v8; // r9
	const char* v9; // rdx
	char v10; // r9
	const char* v11; // rdx
	__int64 v12; // r10
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // r9
	unsigned __int64 v16; // r8
	__int64 v17; // rax
	_DWORD* v18; // rcx
	__int64 v19; // rbx
	_DWORD* v20; // rax
	__int64 v21; // rbx
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // [rsp+20h] [rbp-18h] BYREF
	int v28; // [rsp+28h] [rbp-10h]

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = *v3;
	if (v4 == 120)
	{
		v5 = "x";
		v6 = 120;
		while (v6)
		{
			v6 = (v5++)[v3 - "x" + 1];
			if (v6 != *v5)
				goto LABEL_5;
		}
		v23 = a1[2];
		*(double*)v23 = *v2;
		*(_DWORD*)(v23 + 8) = 3;
		a1[2] += 16i64;
	}
	else
	{
	LABEL_5:
		if (v4 == 121)
		{
			v7 = "y";
			v8 = 121;
			while (v8)
			{
				v8 = (v7++)[v3 - "y" + 1];
				if (v8 != *v7)
					goto LABEL_9;
			}
			v24 = a1[2];
			*(double*)v24 = v2[1];
			*(_DWORD*)(v24 + 8) = 3;
			a1[2] += 16i64;
		}
		else
		{
		LABEL_9:
			if (v4 == 122)
			{
				v9 = "z";
				v10 = 122;
				while (v10)
				{
					v10 = (v9++)[v3 - "z" + 1];
					if (v10 != *v9)
						goto LABEL_13;
				}
				v25 = a1[2];
				*(double*)v25 = v2[2];
				*(_DWORD*)(v25 + 8) = 3;
				a1[2] += 16i64;
			}
			else
			{
			LABEL_13:
				if (v4 == 119)
				{
					v11 = "w";
					v12 = v3 - "w";
					while ((_BYTE)v4)
					{
						LOBYTE(v4) = (v11++)[v12 + 1];
						if ((_BYTE)v4 != *v11)
							goto LABEL_17;
					}
					v26 = a1[2];
					*(double*)v26 = v2[3];
					*(_DWORD*)(v26 + 8) = 3;
					a1[2] += 16i64;
				}
				else
				{
				LABEL_17:
					v13 = a1[4];
					v14 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
					v15 = a1[2];
					v27 = v14;
					v28 = 4;
					sub_14005E8E0((__int64)a1, v13 + 160, (int*)&v27, v15);
					a1[2] += 16i64;
					v16 = a1[2];
					v17 = a1[3];
					v18 = dword_140A12138;
					v19 = v16 - v17;
					v20 = (_DWORD*)(v17 + 16);
					v21 = v19 >> 4;
					if ((unsigned __int64)v20 < v16)
						v18 = v20;
					*(_QWORD*)v16 = *(_QWORD*)v18;
					*(_DWORD*)(v16 + 8) = v18[2];
					a1[2] += 16i64;
					sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
					sub_140058350((__int64)a1, v21);
					a1[2] -= 16i64;
				}
			}
		}
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

