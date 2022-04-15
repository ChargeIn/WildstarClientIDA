//----- (00000001403FCD20) ----------------------------------------------------
unsigned __int64 __fastcall sub_1403FCD20(unsigned int a1, _DWORD* a2, __int64 a3)
{
	unsigned __int64 v3; // r10
	unsigned __int64 v5; // rax
	unsigned __int64 v6; // rdx
	unsigned __int64 result; // rax
	unsigned __int64 v8; // rbx
	__int64* v9; // rsi
	unsigned __int64 v10; // r8
	unsigned __int64 v11; // r11
	__int64 v12; // rdi
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rdx
	_QWORD* v15; // r10
	unsigned __int64 v16; // rcx
	_QWORD* v17; // r10
	_DWORD* v18; // rdx
	int v19; // r10d
	_DWORD* v20; // r8
	int v21; // r11d
	_DWORD* v22; // r8
	int v23; // r11d
	int** i; // r8
	unsigned __int64 v25; // [rsp+40h] [rbp+18h]

	v3 = *(_QWORD*)(a3 + 8);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a1)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v3 || (v25 = v6, a1 < *(_DWORD*)(v6 + 32)))
		v25 = *(_QWORD*)(a3 + 8);
	result = v25;
	if (v25 == v3)
		return result;
	v8 = *(_QWORD*)(v25 + 48);
	v9 = (__int64*)(v25 + 40);
	v10 = 0i64;
	v11 = v8;
	if (!v8)
		return result;
	v12 = *v9;
	while (1)
	{
		v13 = v10 + ((v11 - v10) >> 1);
		if (!a2)
		{
			if (!*(_QWORD*)(v12 + 8 * v13))
				break;
		LABEL_32:
			v10 = v13 + 1;
			goto LABEL_34;
		}
		v18 = *(_DWORD**)(v12 + 8 * v13);
		if (!v18)
			goto LABEL_33;
		result = (unsigned int)(a2[2] - v18[2]);
		if ((_DWORD)result || (result = (unsigned int)(a2[3] - v18[3]), (_DWORD)result))
		{
			if ((result & 0x80000000) != 0i64)
				goto LABEL_33;
			goto LABEL_32;
		}
		result = (unsigned int)a2[4];
		v19 = v18[4];
		if ((_DWORD)result == v19)
			break;
		if (v19 == 2)
		{
		LABEL_33:
			v11 = v10 + ((v11 - v10) >> 1);
			goto LABEL_34;
		}
		if ((_DWORD)result != 2)
			break;
		v10 = v13 + 1;
	LABEL_34:
		if (v10 >= v11)
			return result;
	}
	v14 = v10 + ((v11 - v10) >> 1);
	if (!v13)
		goto LABEL_19;
	v15 = (_QWORD*)(v12 + 8 * v13);
	while (2)
	{
		--v14;
		--v15;
		if (!a2)
		{
			if (*v15)
				break;
			goto LABEL_42;
		}
		v20 = (_DWORD*)*v15;
		if (*v15)
		{
			result = (unsigned int)a2[2];
			if ((_DWORD)result == v20[2])
			{
				result = (unsigned int)a2[3];
				if ((_DWORD)result == v20[3])
				{
					v21 = a2[4];
					result = (unsigned int)v20[4];
					if (v21 == (_DWORD)result || (_DWORD)result != 2 && v21 != 2)
					{
					LABEL_42:
						if (!v14)
							goto LABEL_19;
						continue;
					}
				}
			}
		}
		break;
	}
	++v14;
LABEL_19:
	v16 = v13 + 1;
	if (v16 < v8)
	{
		v17 = (_QWORD*)(v12 + 8 * v16);
		do
		{
			if (a2)
			{
				v22 = (_DWORD*)*v17;
				if (!*v17)
					break;
				result = (unsigned int)a2[2];
				if ((_DWORD)result != v22[2])
					break;
				result = (unsigned int)a2[3];
				if ((_DWORD)result != v22[3])
					break;
				v23 = a2[4];
				result = (unsigned int)v22[4];
				if (v23 != (_DWORD)result && ((_DWORD)result == 2 || v23 == 2))
					break;
			}
			else if (*v17)
			{
				break;
			}
			++v16;
			++v17;
		} while (v16 < v8);
	}
	if (v14 < v16)
	{
		for (i = (int**)(v12 + 8 * v14); ; ++i)
		{
			result = (unsigned __int64)*i;
			if (**i == *a2)
				break;
			if (++v14 >= v16)
				return result;
		}
		return (unsigned __int64)sub_140007270((__int64)v9, v14);
	}
	return result;
}
// 1403FCE5C: conditional instruction was optimized away because eax.4>=1

