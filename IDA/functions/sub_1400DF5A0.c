//----- (00000001400DF5A0) ----------------------------------------------------
__int64 __fastcall sub_1400DF5A0(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rdi
	__int64 result; // rax
	_DWORD* v7; // rax
	__int64 v8; // rdx
	int v9; // r8d
	int v10; // r9d
	__int64* v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]
	int v15; // [rsp+2Ch] [rbp-Ch]

	v4 = a3;
	if (((unsigned __int8)(1 << a3) & *(_BYTE*)(a1 + 31)) != 0)
	{
		v7 = sub_1400CB3D0(a1, &v13);
		v8 = *(_QWORD*)(a1 + 312);
		v9 = v7[2] - *v7;
		v10 = v7[3] - v7[1];
		v13 = 0i64;
		v14 = v9;
		v15 = v10;
		if (v8 && (v11 = *(__int64**)(v8 + 8 * v4)) != 0i64)
		{
			v12 = *v11;
			if (!*v11)
				v12 = v11[1];
			sub_14014E8D0(v12 + 32, (_DWORD*)a2, (unsigned int*)&v13);
			return a2;
		}
		else
		{
			v14 = v9;
			v15 = v10;
			v13 = 0i64;
			sub_1400E73B0(0i64, (_DWORD*)a2, (int*)&v13, v4);
			return a2;
		}
	}
	else
	{
		result = a2;
		*(_QWORD*)a2 = 0i64;
		*(_QWORD*)(a2 + 8) = 0i64;
	}
	return result;
}

