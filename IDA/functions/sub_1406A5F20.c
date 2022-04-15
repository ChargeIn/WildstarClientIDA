//----- (00000001406A5F20) ----------------------------------------------------
__int64 __fastcall sub_1406A5F20(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	unsigned __int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	float v9; // xmm1_4
	__int64 v10; // rsi
	__int64 v11; // rdx
	__int64 v12; // rbx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	result = sub_140056AB0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(result + 8) + 4i64));
		v5 = v4;
		if (v4
			&& (v6 = **(unsigned int**)(v3 + 8), v6 < (__int64)(*(_QWORD*)(v4 + 256) - *(_QWORD*)(v4 + 248)) >> 3)
			&& (v7 = *(_QWORD*)(*(_QWORD*)(v4 + 248) + 8 * v6)) != 0)
		{
			v8 = sub_140206C60(*(_DWORD*)(v7 + 4));
			v9 = 1.1;
			v10 = **(unsigned int**)(v3 + 8);
			if (v8 && ((*(_DWORD*)(v8 + 128) - 1) & 0xFFFFFFFD) == 0)
			{
				v11 = *(_QWORD*)(v5 + 232);
				v12 = 0i64;
				if (v11 && (unsigned int)v10 < *(_DWORD*)(v5 + 272))
					v13 = v11 + 192 * v10;
				else
					v13 = 0i64;
				v9 = 0.0;
				if (sub_1405A9C70(v13) > 0.0)
				{
					v14 = *(_QWORD*)(v5 + 232);
					if (v14)
					{
						if ((unsigned int)v10 < *(_DWORD*)(v5 + 272))
							v12 = v14 + 192 * v10;
					}
					v9 = sub_1405A9C70(v12) * 86400.0;
				}
			}
			v15 = a1[2];
			*(_DWORD*)(v15 + 8) = 3;
			*(double*)v15 = v9;
			a1[2] += 16i64;
			return 1i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

