//----- (00000001404ACCF0) ----------------------------------------------------
__int64 __fastcall sub_1404ACCF0(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	unsigned int i; // esi
	unsigned int v6; // ebx
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64* v10; // rax
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rcx
	int v14; // edx
	int v15; // ecx
	__int64 v16; // rdx
	int* v17; // rax
	__int64 v18; // rcx
	_QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v20; // [rsp+70h] [rbp+8h] BYREF
	__int64 v21; // [rsp+78h] [rbp+10h] BYREF
	int* v22; // [rsp+80h] [rbp+18h] BYREF
	int* v23; // [rsp+88h] [rbp+20h] BYREF

	v20 = a1;
	v2 = qword_140C659D0;
	if (!a2)
		return 2147500037i64;
	sub_140008410(qword_140C659D0 + 264);
	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v6 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4i64 * i);
		if (v6)
		{
			v7 = *(_QWORD*)(v2 + 16);
			v8 = v7;
			v9 = *(_QWORD*)(v7 + 8);
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < v6)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v8 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v8 == v7 || v6 < *(_DWORD*)(v8 + 32))
			{
				v21 = *(_QWORD*)(v2 + 16);
				v10 = &v21;
			}
			else
			{
				v20 = v8;
				v10 = &v20;
			}
			v11 = *v10;
			if (v11 != v7)
			{
				v12 = *(_QWORD*)(v11 + 40);
				if (v12)
				{
					v13 = *(_QWORD*)(qword_140C65898 + 7152);
					v14 = v13 ? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13) : 0;
					if ((v15 = *(_DWORD*)(*(_QWORD*)v12 + 20i64)) == 0 || v15 == 1 && v14 == 167 || v15 == 2 && v14 == 166)
					{
						v16 = *(_QWORD*)(v2 + 272);
						v17 = (int*)v16;
						v18 = *(_QWORD*)(v16 + 8);
						while (v18)
						{
							if (*(_DWORD*)(v18 + 32) < v6)
							{
								v18 = *(_QWORD*)(v18 + 24);
							}
							else
							{
								v17 = (int*)v18;
								v18 = *(_QWORD*)(v18 + 16);
							}
						}
						if (v17 == (int*)v16 || v6 < v17[8])
						{
							LODWORD(v19[0]) = v6;
							v19[1] = 0i64;
							v22 = v17;
							sub_140055C60(v2 + 264, &v23, (__int64*)&v22, v19);
							v17 = v23;
						}
						*((_QWORD*)v17 + 5) = v12;
					}
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;

