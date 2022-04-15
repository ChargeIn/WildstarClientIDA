//----- (0000000140433F70) ----------------------------------------------------
void __fastcall sub_140433F70(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r10
	int* v5; // r11
	char v6; // al
	__int64 v7; // r8
	__int64 v8; // r9
	int v9; // ecx
	int v10; // eax
	__int64 v11; // rcx
	char* v12; // rdx
	__int64 i; // rax
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rax
	__int64 j; // rax
	__int64 k; // rax
	char v19; // [rsp+30h] [rbp-18h] BYREF
	__int64 v20; // [rsp+58h] [rbp+10h]
	char v22; // [rsp+68h] [rbp+20h] BYREF

	if (a2 != a3)
	{
		v20 = a2;
		do
		{
			v4 = *(_QWORD*)(a1 + 8);
			v5 = (int*)(a2 + 32);
			v6 = 1;
			v7 = *(_QWORD*)(v4 + 8);
			v8 = v4;
			if (v7)
			{
				v9 = *v5;
				do
				{
					v10 = *(_DWORD*)(v7 + 32);
					v8 = v7;
					if (v9 < v10 || v10 >= v9 && *(_DWORD*)(a2 + 36) < *(_DWORD*)(v7 + 36))
					{
						v7 = *(_QWORD*)(v7 + 16);
						v6 = 1;
					}
					else
					{
						v7 = *(_QWORD*)(v7 + 24);
						v6 = 0;
					}
				} while (v7);
			}
			v11 = v8;
			if (v6)
			{
				if (v8 == *(_QWORD*)(v4 + 16))
				{
					v12 = &v22;
					goto LABEL_27;
				}
				if (*(_BYTE*)v8 || *(_QWORD*)(*(_QWORD*)(v8 + 8) + 8i64) != v8)
				{
					v11 = *(_QWORD*)(v8 + 16);
					if (v11)
					{
						for (i = *(_QWORD*)(v11 + 24); i; i = *(_QWORD*)(i + 24))
							v11 = i;
					}
					else
					{
						v11 = *(_QWORD*)(v8 + 8);
						if (v8 == *(_QWORD*)(v11 + 16))
						{
							do
							{
								v14 = v11;
								v11 = *(_QWORD*)(v11 + 8);
							} while (v14 == *(_QWORD*)(v11 + 16));
						}
					}
				}
				else
				{
					v11 = *(_QWORD*)(v8 + 24);
				}
			}
			v15 = *(_DWORD*)(v11 + 32);
			if (v15 >= *v5 && (*v5 < v15 || *(_DWORD*)(v11 + 36) >= *(_DWORD*)(a2 + 36)))
				goto LABEL_28;
			v12 = &v19;
		LABEL_27:
			sub_1403AF200(a1, (int**)v12, v7, v8, (__int64)v5);
			a2 = v20;
		LABEL_28:
			v16 = *(_QWORD*)(a2 + 24);
			if (v16)
			{
				a2 = *(_QWORD*)(a2 + 24);
				v20 = v16;
				for (j = *(_QWORD*)(v16 + 16); j; j = *(_QWORD*)(j + 16))
				{
					a2 = j;
					v20 = j;
				}
			}
			else
			{
				for (k = *(_QWORD*)(a2 + 8); a2 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
					a2 = k;
				if (*(_QWORD*)(a2 + 24) != k)
					a2 = k;
				v20 = a2;
			}
		} while (a2 != a3);
	}
}

