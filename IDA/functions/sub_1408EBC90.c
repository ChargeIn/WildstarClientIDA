//----- (00000001408EBC90) ----------------------------------------------------
__int64 __fastcall sub_1408EBC90(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v4; // r15
	int v5; // edi
	__int64 v10; // rsi
	int v11; // ecx
	__int64 result; // rax
	unsigned __int16 v13; // dx
	__int64 v14; // r9
	int v15; // eax
	bool v16; // zf
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	int v18; // [rsp+28h] [rbp-40h]
	char v19; // [rsp+30h] [rbp-38h]

	v4 = *(unsigned int*)(a1 + 192);
	v5 = *(_DWORD*)(a1 + 188);
	v10 = 0i64;
	while (1)
	{
		v11 = sub_1408EB9B0(a1 + 16, a4, v5);
		if (!v11)
			break;
		v5 -= v11;
		a4 += 2i64 * (unsigned int)(v11 * *(_DWORD*)(a1 + 40));
	LABEL_12:
		if (!v5)
			goto LABEL_13;
	}
	result = v10 + 2;
	if (v10 + 2 <= v4)
	{
		v13 = *(_WORD*)(v10 + a3);
		v14 = v10 + a3;
		if (v13 > a2)
		{
			*(_DWORD*)a1 = 0;
			*(_DWORD*)(a1 + 4) = 2;
			return result;
		}
		if (*(_DWORD*)(a1 + 8) != 4 && v13 + (unsigned __int64)(unsigned int)v10 + 2 <= v4)
		{
			v10 = (unsigned int)v13 + (_DWORD)v10 + 2;
			v17 = v14 + 2;
			v18 = v13;
			if ((_DWORD)v10 == (_DWORD)v4 && *(_BYTE*)(a1 + 196))
			{
				v19 = 1;
				*(_DWORD*)(a1 + 8) = 4;
				sub_1408EBB00(a1 + 16, (__int64)&v17);
			}
			else
			{
				v19 = 0;
				sub_1408EBB00(a1 + 16, (__int64)&v17);
			}
			goto LABEL_12;
		}
	}
LABEL_13:
	v15 = *(_DWORD*)(a1 + 188);
	*(_DWORD*)(a1 + 12) = v10;
	v16 = *(_DWORD*)(a1 + 8) == 4;
	*(_DWORD*)a1 = v15 - v5;
	if (!v16 || (result = sub_1408EB9B0(a1 + 16, 0i64, 0), (_DWORD)result))
	{
		result = (unsigned int)-*(_DWORD*)a1;
		*(_DWORD*)(a1 + 4) = 46 - (*(_DWORD*)a1 != 0);
	}
	else
	{
		*(_DWORD*)(a1 + 4) = 17;
	}
	return result;
}

