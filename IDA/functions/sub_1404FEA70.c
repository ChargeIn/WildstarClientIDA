//----- (00000001404FEA70) ----------------------------------------------------
__int64 __fastcall sub_1404FEA70(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rbp
	__int64 v4; // rcx
	_QWORD* v5; // rsi
	unsigned __int64 v6; // rdi
	_QWORD* v7; // rbx
	int* v8; // rax
	int* v9; // rbx
	unsigned __int64 v10; // r15
	__int64* v11; // rdi
	__int64 v12; // rcx
	__int64 i; // rbx
	_QWORD* v14; // rcx
	__int64 v15; // rdi
	int* v16; // rax
	int v17; // [rsp+60h] [rbp+8h] BYREF
	int* v18; // [rsp+68h] [rbp+10h] BYREF
	__int64 v19; // [rsp+70h] [rbp+18h] BYREF

	result = *(_QWORD*)(a1 + 2192);
	if (result)
		v3 = *(_QWORD*)(result + 16);
	else
		v3 = 0i64;
	if (v3)
	{
		v4 = *(_QWORD*)(a1 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
		v5 = (_QWORD*)(a1 + 2232);
		sub_1405005B0(a1 + 2232);
		sub_140019490((_QWORD*)(a1 + 2232));
		result = *(_QWORD*)(v3 + 24);
		if (result)
		{
			result = *(unsigned int*)(result + 360);
			v17 = result;
			if ((_DWORD)result)
			{
				v6 = (*(__int64(__fastcall**)(int*))(a1 + 2256))(&v17);
				v7 = *(_QWORD**)(*(_QWORD*)(a1 + 2248) + 8 * (v6 % *(_QWORD*)(a1 + 2240)));
				if (!v7)
					goto LABEL_16;
				while (v6 != *v7 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 2264))(&v17, v7 + 2))
				{
					v7 = (_QWORD*)v7[1];
					if (!v7)
						goto LABEL_16;
				}
				result = (__int64)(v7 + 3);
				if (v7 == (_QWORD*)-24i64)
				{
				LABEL_16:
					v8 = sub_14018B280(8i64, 0);
					v9 = v8;
					if (v8)
						*(_QWORD*)v8 = 0i64;
					else
						v9 = 0i64;
					if (*v5 == *(_QWORD*)(a1 + 2240))
						sub_1400290D0(a1 + 2232);
					v10 = (*(__int64(__fastcall**)(int*))(a1 + 2256))(&v17);
					v11 = (__int64*)(*(_QWORD*)(a1 + 2248) + 8 * (v10 % *(_QWORD*)(a1 + 2240)));
					result = (__int64)sub_14018B280(32i64, 0);
					if (result)
					{
						v12 = *v11;
						*(_QWORD*)result = v10;
						*(_QWORD*)(result + 8) = v12;
						LODWORD(v12) = v17;
						*(_QWORD*)(result + 24) = v9;
						*(_DWORD*)(result + 16) = v12;
						*v11 = result;
					}
					else
					{
						result = 0i64;
						*v11 = 0i64;
					}
					++* v5;
				}
			}
		}
		else
		{
			v17 = 0;
		}
		for (i = *(_QWORD*)(v3 + 5576); i; i = *(_QWORD*)(i + 24))
		{
			v14 = *(_QWORD**)(i + 56);
			if (v14)
			{
				v15 = v14[39];
				if (v15)
				{
					result = *(_QWORD*)(v15 + 8);
					if (result)
					{
						if (*(_DWORD*)(result + 28))
						{
							result = sub_140540360(v14, *(_DWORD*)(v3 + 8));
							if ((_DWORD)result)
							{
								result = sub_1402DD480(a1 + 2232, *(_QWORD*)(v15 + 8) + 28i64, &v19);
								if (!(_DWORD)result)
								{
									v16 = sub_14018B280(8i64, 0);
									if (v16)
									{
										*(_QWORD*)v16 = 0i64;
										v18 = v16;
									}
									else
									{
										v18 = 0i64;
									}
									result = (__int64)sub_1400B6080(a1 + 2232, (int*)(*(_QWORD*)(v15 + 8) + 28i64), &v18);
								}
							}
						}
					}
				}
			}
		}
		*(_DWORD*)(a1 + 2224) = 0;
	}
	return result;
}

