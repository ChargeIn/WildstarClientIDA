//----- (0000000140861CE0) ----------------------------------------------------
__int64 __fastcall sub_140861CE0(__int64 a1, int* a2)
{
	int v4; // esi
	unsigned int v5; // ebp
	unsigned int v6; // edi
	__int64 v7; // rcx
	__int64 result; // rax
	__int64 v9; // rdx
	unsigned int v10; // ecx
	unsigned int v11; // r8d
	unsigned int v12; // r8d
	unsigned int v13; // eax
	bool v14; // zf
	unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

	sub_140872880(a1 + 16, *(float*)(*(_QWORD*)(a1 + 208) + 208i64));
	v4 = 0;
	v5 = 45;
	v6 = (int)(float)((float)((float)((float)*(int*)(a1 + 52) * 0.000015258789) * (float)*a2) + 0.5);
	if (v6)
	{
		while (1)
		{
			if (!*(_WORD*)(a1 + 106) && !*(_BYTE*)(a1 + 216))
			{
				v7 = *(_QWORD*)(a1 + 8);
				v15 = *a2;
				result = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v7 + 24i64))(v7, &v15);
				if ((_DWORD)result != 45)
				{
					if ((_DWORD)result != 17)
						return result;
					*(_BYTE*)(a1 + 216) = 1;
				}
				v9 = *(_QWORD*)(a1 + 208);
				if ((*(_BYTE*)(v9 + 383) & 2) != 0)
					v10 = 0;
				else
					v10 = *(_DWORD*)(v9 + 372);
				v11 = 0;
				if (v10 > v15)
				{
					v12 = v10;
					v10 = v15;
					v11 = v12 - v15;
				}
				v15 -= v10;
				*(_BYTE*)(v9 + 383) &= 0xF1u;
				*(_DWORD*)(v9 + 372) = v11;
				*(_WORD*)(a1 + 106) = v15;
			}
			v13 = *(unsigned __int16*)(a1 + 106);
			if (v6 < v13)
				v13 = v6;
			v4 += v13;
			v6 -= v13;
			v14 = *(_WORD*)(a1 + 106) == (unsigned __int16)v13;
			*(_WORD*)(a1 + 106) -= v13;
			if (v14)
			{
				if (*(_BYTE*)(a1 + 216))
					break;
			}
			if (!v6)
				goto LABEL_20;
		}
		v5 = 17;
	}
LABEL_20:
	result = v5;
	*a2 = (int)(float)((float)((float)v4 / (float)((float)*(int*)(a1 + 52) * 0.000015258789)) + 0.5);
	return result;
}

