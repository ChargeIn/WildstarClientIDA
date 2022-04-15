//----- (0000000140850910) ----------------------------------------------------
__int64* __fastcall sub_140850910(_QWORD* a1, unsigned int a2, unsigned int a3)
{
	__int64* result; // rax
	__int64 i; // rbx
	__int64 v8; // r10
	unsigned __int8* v9; // r8
	unsigned int v10; // r9d
	int v11; // ecx
	__int64 v12; // rdx
	float* v13; // r9

	result = (__int64*)a1[14];
	if (result)
	{
		for (i = *result; i != result[1]; i += 16i64)
		{
			v8 = *(_QWORD*)(i + 8);
			v9 = *(unsigned __int8**)(v8 + 24);
			if (v9)
			{
				v10 = *v9;
				v11 = 0;
				while (1)
				{
					v12 = (unsigned int)(v11 + 1);
					if (v9[v12] == 10)
						break;
					++v11;
					if ((unsigned int)v12 >= v10)
						goto LABEL_11;
				}
				v13 = (float*)&v9[16 * v11 + ((v10 + 4) & 0xFFFFFFFC)];
				if (v13)
				{
					if (*v13 != 1.0)
						(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD))(*a1 + 392i64))(a1, *(_QWORD*)(v8 + 16), a2, a3);
				}
			}
		LABEL_11:
			result = (__int64*)a1[14];
		}
	}
	return result;
}

