//----- (00000001403F87B0) ----------------------------------------------------
void __fastcall sub_1403F87B0(__int64 a1, __int64 a2, __int64* a3, __int64 a4)
{
	__int64 v4; // r10
	unsigned int v7; // ebx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rdi
	int** v13; // rsi
	__int64 v14; // rax
	int v15; // ebp
	int* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdx
	int* v19; // rcx
	__int64 v20; // rax
	__int64 v21; // [rsp+60h] [rbp+18h] BYREF

	v4 = *a3;
	v7 = a2;
	if (*a3 || a3[1])
	{
		if ((_DWORD)a2)
		{
			v9 = *(_QWORD*)(qword_140C635F0 + 5600);
			v10 = v9;
			v11 = *(_QWORD*)(v9 + 8);
			while (v11)
			{
				if (*(_DWORD*)(v11 + 32) < v7)
				{
					v11 = *(_QWORD*)(v11 + 24);
				}
				else
				{
					v10 = v11;
					v11 = *(_QWORD*)(v11 + 16);
				}
			}
			if (v10 == v9 || (v21 = v10, v7 < *(_DWORD*)(v10 + 32)))
				v21 = v9;
			v12 = 0i64;
			if (v21 == v9)
			{
				v13 = (int**)(a1 + 26648);
				v14 = *(_QWORD*)(a1 + 26648);
				v15 = 1;
				if (v14)
				{
					while (*(_DWORD*)(v14 + 32) != v7)
					{
						v14 = *(_QWORD*)(v14 + 24);
						if (!v14)
							goto LABEL_22;
					}
					v15 = 0;
				}
			LABEL_22:
				v16 = sub_14018B280(48i64, 0);
				if (v16)
				{
					v17 = a3[1];
					v18 = *a3;
					*((_QWORD*)v16 + 2) = 0i64;
					*((_QWORD*)v16 + 3) = 0i64;
					*((_QWORD*)v16 + 1) = v17;
					*(_QWORD*)v16 = v18;
					v16[8] = v7;
					*((_QWORD*)v16 + 5) = a4;
					if (!*((_QWORD*)v16 + 2))
					{
						v19 = v16 + 6;
						*((_QWORD*)v16 + 2) = v13;
						*((_QWORD*)v16 + 3) = *v13;
						*v13 = v16;
						v20 = *((_QWORD*)v16 + 3);
						if (v20)
							*(_QWORD*)(v20 + 16) = v19;
					}
				}
				if (v15 && (*(_BYTE*)(a1 + 31560) & 0x10) != 0)
				{
					LODWORD(v21) = v7;
					sub_1403F4740(a1, 0x59Cu, (__int64)&v21);
				}
			}
			else
			{
				if (*(_QWORD*)(*(_QWORD*)(v21 + 40) - 8i64))
					v12 = *(_QWORD*)(v21 + 40);
				((void(__fastcall*)(__int64, _QWORD, __int64))a3[1])(v4, v7, v12);
			}
		}
		else
		{
			((void(__fastcall*)(__int64, __int64, _QWORD))a3[1])(v4, a2, 0i64);
		}
	}
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

