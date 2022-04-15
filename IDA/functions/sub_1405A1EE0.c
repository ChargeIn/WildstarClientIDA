//----- (00000001405A1EE0) ----------------------------------------------------
__int64 __fastcall sub_1405A1EE0(_QWORD* a1)
{
	unsigned int v2; // esi
	__int64 result; // rax
	unsigned int v4; // edi
	__int64 v5; // rax
	__int64 v6; // rbx
	int v7; // edx
	int v8; // eax
	__int64 v9; // rbx
	int v10; // edx
	char* v11; // r8
	unsigned __int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rbx
	unsigned int v15; // eax
	__int64 v16; // rdi
	__int64 v17; // rcx
	int v18; // eax
	int v19; // ebx
	_DWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
	__int64 v21; // [rsp+28h] [rbp-60h]
	unsigned __int64 v22; // [rsp+30h] [rbp-58h]
	int v23; // [rsp+38h] [rbp-50h]
	int v24; // [rsp+3Ch] [rbp-4Ch]
	__int64 v25; // [rsp+40h] [rbp-48h]
	char* v26; // [rsp+48h] [rbp-40h]
	int v27; // [rsp+50h] [rbp-38h] BYREF
	char v28; // [rsp+54h] [rbp-34h] BYREF
	char v29[7]; // [rsp+6Dh] [rbp-1Bh] BYREF
	int v30; // [rsp+74h] [rbp-14h]

	sub_1407E4830(&v27, 0i64, 0x28ui64);
	v2 = 1;
	result = sub_14059D660(&v27, a1, 1);
	if ((_DWORD)result)
	{
		v4 = *(_DWORD*)(qword_140C65898 + 6864);
		if (!v4)
			return 0i64;
		v5 = sub_140245C00(v4);
		v6 = v5;
		if (!v5)
			return 0i64;
		if (*(_DWORD*)(v5 + 8) == 22)
		{
			v7 = 79;
		}
		else if ((*(_BYTE*)(v5 + 32) & 4) == 0 || (v7 = 87, *(_DWORD*)(v5 + 28)))
		{
			v7 = 44;
		}
		if ((unsigned int)sub_1403A0D20(qword_140C65898, v7) && sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v6 + 12), 0i64))
		{
			sub_14039E400(qword_140C65898);
			v20[0] = 0;
			v22 = 0i64;
			v25 = 5i64;
			v8 = sub_1405926A0(v6);
			v9 = qword_140C65898;
			v21 = v4;
			v20[1] = sub_1403A0D20(qword_140C65898, v8);
			v24 = v27;
			v10 = 6;
			v26 = &v28;
			v11 = v29;
			v23 = v30;
			v12 = (unsigned __int8)v29[1] | ((unsigned __int64)(unsigned __int8)v29[3] << 8);
			do
			{
				v13 = (unsigned __int8)*v11--;
				v12 = v13 | (v12 << 8);
				--v10;
			} while (v10);
			v22 = v12;
			v14 = *(_QWORD*)(v9 + 120);
			v15 = sub_1405A3CA0();
			v16 = sub_1403ACD90(qword_140C65B70, v15, v14);
			v18 = sub_140399780(v17, v16, v20, (__int64)v20);
			v19 = v18;
			if (v18)
			{
				if (v18 != 317)
					sub_1403A12A0(qword_140C65898, v18, v16, 0);
				if (v19 != 317)
					return 0;
			}
			return v2;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 1405A2072: variable 'v17' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

