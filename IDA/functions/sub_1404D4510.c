//----- (00000001404D4510) ----------------------------------------------------
__int64 __fastcall sub_1404D4510(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	_QWORD* v4; // rbx
	__int64* v5; // rdi
	unsigned __int64 v6; // rbp
	_BOOL8 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // r13
	__int64 v10; // rsi
	int** v11; // r14
	__int64 v12; // rax
	int* v13; // rcx
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // rdi
	unsigned __int64 v17; // rbx
	__int64 v18; // rcx
	int v19; // eax
	_BOOL8 v20; // [rsp+20h] [rbp-98h]
	char v21[48]; // [rsp+28h] [rbp-90h] BYREF
	__int64 v22; // [rsp+58h] [rbp-60h]
	__int64 v23[3]; // [rsp+60h] [rbp-58h] BYREF
	__int64 v25; // [rsp+C8h] [rbp+10h]
	int* v26; // [rsp+D0h] [rbp+18h]
	__int64* v27; // [rsp+D8h] [rbp+20h]

	result = *a2;
	v4 = (_QWORD*)a1;
	if (*(_DWORD*)(a1 + 8) == (_DWORD)result)
	{
		v5 = (__int64*)(a1 + 32);
		v27 = (__int64*)(a1 + 32);
		sub_1404D5050((__int64*)(a1 + 32));
		v6 = 0i64;
		v7 = (*(unsigned int(__fastcall**)(_QWORD*))(*v4 + 16i64))(v4) == 0;
		v20 = v7;
		if (a2[6])
		{
			v8 = 0i64;
			v25 = 0i64;
			v9 = 0i64;
			do
			{
				sub_1404D3630((__int64)v21, v9 + *((_QWORD*)a2 + 4));
				sub_1404D4F60(v5, (__int64)v21);
				sub_1403FBAC0(v23);
				if (v22)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
				if (!v7)
				{
					v10 = v8 + *v5;
					sub_1404D4B30((__int64*)(v10 + 56));
					v11 = *(int***)(v10 + 56);
					v12 = *(_QWORD*)(v10 + 48);
					v13 = *v11;
					v26 = *v11;
					if (v12)
					{
						v14 = *(_QWORD*)(v12 - 8);
						v15 = sub_14018B280(2 * v14 + 18, 0);
						if (v15)
						{
							*((_QWORD*)v15 + 1) = v14;
							*(_QWORD*)v15 = off_140B55060;
						}
						v16 = v15 + 4;
						v17 = 2 * v14;
						sub_1407DB590(v15 + 4, *(int**)(v10 + 48), v17);
						v13 = v26;
						*(_WORD*)((char*)v16 + v17) = 0;
						v8 = v25;
						*v11 = v16;
						v5 = v27;
					}
					else
					{
						*v11 = 0i64;
					}
					if (v13)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
					v18 = *(_QWORD*)(v10 + 56);
					v19 = *(_DWORD*)(v10 + 8);
					v7 = v20;
					*(_DWORD*)(v18 + 8) = v19;
				}
				v8 += 72i64;
				++v6;
				v9 += 64i64;
				v25 = v8;
			} while (v6 < a2[6]);
			v4 = (_QWORD*)a1;
		}
		result = *((_QWORD*)a2 + 2);
		v4[2] = result;
	}
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 1404D4510: using guessed type __int64 var_58[3];

