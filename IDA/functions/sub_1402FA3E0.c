//----- (00000001402FA3E0) ----------------------------------------------------
int* __fastcall sub_1402FA3E0(_QWORD* a1, int a2, int* a3)
{
	__int64 v4; // rbx
	int* result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // r8
	_QWORD* v10; // r14
	__int64 v11; // rbp
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // rdi
	unsigned __int64 v15; // rbx
	__int64 v16; // rcx
	int v17[10]; // [rsp+20h] [rbp-28h] BYREF

	v4 = a2;
	result = (int*)(*(__int64(__fastcall**)(_QWORD*))(*a1 + 1008i64))(a1);
	if (!(_DWORD)result)
	{
		v7 = *a1;
		v17[0] = 0;
		result = (int*)(*(__int64(__fastcall**)(_QWORD*, int*, _QWORD))(v7 + 16))(a1, v17, 0i64);
		if ((_DWORD)result)
		{
			v8 = a1[8];
			if ((unsigned int)v4 < *(_DWORD*)(v8 + 464))
			{
				result = *(int**)(v8 + 472);
				v9 = *((unsigned __int16*)result + v4);
				if ((unsigned int)v9 < *(_DWORD*)(v8 + 448))
				{
					v10 = (_QWORD*)(a1[132] + 24 * v9);
					if (*v10)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v10 + 8i64))(*v10);
						*v10 = 0i64;
					}
					v11 = v10[1];
					if (a3)
					{
						v12 = 0i64;
						if (*(_WORD*)a3)
						{
							do
								++v12;
							while (*((_WORD*)a3 + v12));
						}
						v13 = sub_14018B280(2 * v12 + 18, 0);
						if (v13)
						{
							*((_QWORD*)v13 + 1) = v12;
							*(_QWORD*)v13 = off_140B55060;
						}
						else
						{
							v13 = 0i64;
						}
						v14 = v13 + 4;
						v15 = 2 * v12;
						sub_1407DB590(v13 + 4, a3, v15);
						*(_WORD*)((char*)v14 + v15) = 0;
						v10[1] = v14;
					}
					else
					{
						v10[1] = 0i64;
					}
					if (v11)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
					v16 = v10[2];
					if (v16)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
						v10[2] = 0i64;
					}
					return (int*)sub_1402F5CA0((__int64)a1, 12);
				}
			}
		}
		else
		{
			result = sub_14018B280(48i64, 0);
			if (result)
				return (int*)sub_1402EF870((__int64)result, (__int64)a1, v4, a3);
		}
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 1402FA3E0: using guessed type int var_28[10];

