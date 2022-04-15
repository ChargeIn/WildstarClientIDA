//----- (00000001405A94B0) ----------------------------------------------------
int* __fastcall sub_1405A94B0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r15
	int* result; // rax
	int* v5; // rbx
	__int64 v6; // r8
	__int64 v7; // rdx
	int** v8; // rcx
	unsigned int v9; // edi
	unsigned __int64 v10; // r14
	int* v11; // rbp

	v2 = qword_140C65B80;
	result = *(int**)(qword_140C65B80 + 88);
	v5 = *(int**)result;
	if (*(int**)result != result)
	{
		do
		{
			v6 = *((_QWORD*)v5 + 2);
			v7 = 0i64;
			v8 = *(int***)(v6 + 32);
			result = *v8;
			if (*v8 != (int*)v8)
			{
				do
				{
					result = *(int**)result;
					++v7;
				} while (result != (int*)v8);
				if (v7)
				{
					v9 = **(_DWORD**)v6;
					sub_14043F640(a2, a2[5] + 1i64);
					v10 = 8 * (v9 % (unsigned __int64)((__int64)(a2[3] - a2[2]) >> 3));
					v11 = *(int**)(v10 + a2[2]);
					result = v11;
					if (v11)
					{
						while (result[2] != v9)
						{
							result = *(int**)result;
							if (!result)
								goto LABEL_8;
						}
					}
					else
					{
					LABEL_8:
						result = sub_14018B280(16i64, 0);
						*(_QWORD*)result = 0i64;
						if (result != (int*)-8i64)
							result[2] = v9;
						*(_QWORD*)result = v11;
						*(_QWORD*)(v10 + a2[2]) = result;
						++a2[5];
					}
				}
			}
			v5 = *(int**)v5;
		} while (v5 != *(int**)(v2 + 88));
	}
	return result;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

