//----- (00000001402F92B0) ----------------------------------------------------
__int64 __fastcall sub_1402F92B0(_QWORD* a1, int* a2, unsigned __int64 a3)
{
	__int64 v3; // rax
	__int64 result; // rax
	unsigned __int64 i; // rdi
	__int64 v9; // rdx
	unsigned int v10; // ecx
	__int64 v11; // rax
	int v12[4]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v13; // [rsp+30h] [rbp-28h] BYREF
	int v14; // [rsp+38h] [rbp-20h]
	int v15; // [rsp+3Ch] [rbp-1Ch]
	int v16; // [rsp+40h] [rbp-18h]
	__int64 v17; // [rsp+44h] [rbp-14h]

	v3 = *a1;
	v12[0] = 0;
	result = (*(__int64(__fastcall**)(_QWORD*, int*, _QWORD))(v3 + 16))(a1, v12, 0i64);
	if ((_DWORD)result)
	{
		v13 = 0i64;
		v15 = 0;
		v17 = 0i64;
		v14 = 1065353216;
		v16 = 0;
		for (i = 0i64; i < a1[110]; ++i)
		{
			v9 = **(unsigned int**)(a1[109] + 8 * i);
			v10 = 0;
			if (a3)
			{
				v11 = 0i64;
				do
				{
					if ((_DWORD)v9 == a2[v11])
						break;
					v11 = ++v10;
				} while (v10 < a3);
			}
			result = v10;
			if (v10 == a3)
				result = (*(__int64(__fastcall**)(_QWORD*, __int64, __int64*))(*a1 + 600i64))(a1, v9, &v13);
		}
	}
	else
	{
		result = (__int64)sub_14018B280(48i64, 0);
		if (result)
			return (__int64)sub_1402EF6C0((_QWORD*)result, (__int64)a1, a2, a3);
	}
	return result;
}
// 1402F92B0: using guessed type int var_38[4];

