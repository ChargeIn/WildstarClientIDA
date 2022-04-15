//----- (00000001405A5C90) ----------------------------------------------------
void __fastcall sub_1405A5C90(__int64 a1, _WORD* a2)
{
	__int64 v3; // rdi
	unsigned __int64 v4; // rsi
	__int64 v5; // rbx
	void(__fastcall * **v6)(_QWORD); // r14
	int* v7; // rbx
	unsigned __int64 v8; // rax
	__int64 v9; // r12
	unsigned __int64 v10; // r14
	unsigned __int64 v11; // r15
	int* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rax
	int v16; // ecx
	int v17; // xmm0_4
	int** v18; // rdx
	__int64 v19; // rax
	int v20[4]; // [rsp+20h] [rbp-38h] BYREF
	_WORD* v21; // [rsp+68h] [rbp+10h] BYREF
	void(__fastcall * **v22)(_QWORD); // [rsp+70h] [rbp+18h] BYREF

	if (a2)
	{
		v21 = a2;
		if (*a2)
		{
			v3 = a1 + 27976;
			v4 = (*(__int64(__fastcall**)(_WORD**))(a1 + 28000))(&v21);
			v5 = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 8 * (v4 % *(_QWORD*)(v3 + 8)));
			if (!v5)
				goto LABEL_7;
			while (v4 != *(_QWORD*)v5 || !(*(unsigned int(__fastcall**)(_WORD**, __int64))(v3 + 32))(&v21, v5 + 16))
			{
				v5 = *(_QWORD*)(v5 + 8);
				if (!v5)
					goto LABEL_7;
			}
			if (v5 == -24)
			{
			LABEL_7:
				if ((*(int(__fastcall**)(_QWORD, _WORD*, void(__fastcall****)(_QWORD), _QWORD))(**(_QWORD**)(a1 + 29264)
					+ 40i64))(
						*(_QWORD*)(a1 + 29264),
						v21,
						&v22,
						0i64) >= 0)
				{
					v6 = v22;
					v7 = sub_14018B280(40i64, 0);
					if (v7)
					{
						*(_QWORD*)v7 = off_140B6CFE0;
						*((_QWORD*)v7 + 3) = 0i64;
						*((_QWORD*)v7 + 4) = 0i64;
						v7[2] = 1;
						*((_QWORD*)v7 + 2) = v6;
						(**v6)(v6);
					}
					else
					{
						v7 = 0i64;
					}
					if (*(_QWORD*)v3 == *(_QWORD*)(v3 + 8))
						sub_1400290D0(v3);
					v8 = (*(__int64(__fastcall**)(_WORD**))(v3 + 24))(&v21);
					v9 = *(_QWORD*)(v3 + 16);
					v10 = v8;
					v11 = v8 % *(_QWORD*)(v3 + 8);
					v12 = sub_14018B280(32i64, 0);
					if (v12)
					{
						v13 = *(_QWORD*)(v9 + 8 * v11);
						*(_QWORD*)v12 = v10;
						*((_QWORD*)v12 + 1) = v13;
						v14 = (__int64)v21;
						*((_QWORD*)v12 + 3) = v7;
						*((_QWORD*)v12 + 2) = v14;
					}
					else
					{
						v12 = 0i64;
					}
					*(_QWORD*)(v9 + 8 * v11) = v12;
					++* (_QWORD*)v3;
					v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 29256) + 72i64))(*(_QWORD*)(a1 + 29256));
					v16 = *(_DWORD*)(v15 + 32);
					v20[2] = 0;
					v17 = *(_DWORD*)(v15 + 36);
					v20[0] = v16;
					v20[1] = v17;
					((void(__fastcall*)(void(__fastcall***)(_QWORD), int*))(*v22)[30])(v22, v20);
					v20[0] = 0;
					if (!((unsigned int(__fastcall*)(void(__fastcall***)(_QWORD), int*, _QWORD))(*v22)[3])(v22, v20, 0i64))
					{
						v18 = (int**)(a1 + 28016);
						if (!*((_QWORD*)v7 + 3))
						{
							*((_QWORD*)v7 + 3) = v18;
							*((_QWORD*)v7 + 4) = *v18;
							*v18 = v7;
							v19 = *((_QWORD*)v7 + 4);
							if (v19)
								*(_QWORD*)(v19 + 24) = v7 + 8;
						}
					}
					if (v22)
						((void(__fastcall*)(void(__fastcall***)(_QWORD), int**))(*v22)[1])(v22, v18);
				}
			}
			else
			{
				(***(void(__fastcall****)(_QWORD))(v5 + 24))(*(_QWORD*)(v5 + 24));
			}
		}
	}
}
// 1405A5E85: variable 'v18' is possibly undefined
// 140B6CFE0: using guessed type __int64 (__fastcall *off_140B6CFE0[5])();

