//----- (00000001405AD480) ----------------------------------------------------
void __fastcall sub_1405AD480(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // r15
	unsigned int v7; // ebx
	int* v8; // r14
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	int* v13; // rax
	__int64 v14; // r8
	int v15; // edx
	unsigned int v16; // ecx
	_DWORD* i; // rax
	__int64 v18; // rbx
	int v19; // eax

	if (a2)
	{
		if (!*(_QWORD*)(a1 + 280))
		{
			(**(void(__fastcall***)(__int64))a2)(a2);
			v4 = *(_QWORD*)(a1 + 280);
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 280) = a2;
		}
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
		if (v5)
		{
			v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 32i64))(v5);
			v7 = 0;
			v8 = sub_14018B280(32i64, 0);
			if (v8)
			{
				*v8 = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6);
				*((_QWORD*)v8 + 1) = a2;
				(**(void(__fastcall***)(__int64))a2)(a2);
				v9 = qword_140C659F0;
				*((_QWORD*)v8 + 3) = 0i64;
				*((_QWORD*)v8 + 2) = v9 + 640;
				*((_QWORD*)v8 + 3) = *(_QWORD*)(v9 + 640);
				*(_QWORD*)(v9 + 640) = v8;
				v10 = *((_QWORD*)v8 + 3);
				if (v10)
					*(_QWORD*)(v10 + 16) = v8 + 6;
			}
			else
			{
				v9 = qword_140C659F0;
			}
			sub_1404BC3C0(v9);
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 32i64))(v11);
			v13 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
			v14 = *(_QWORD*)(a1 + 232);
			v15 = *v13;
			if (v14)
			{
				v16 = *(_DWORD*)(a1 + 272);
				if (v16)
				{
					for (i = (_DWORD*)(v14 + 4); *i != v15; i += 48)
					{
						if (++v7 >= v16)
							return;
					}
					v18 = v14 + 192i64 * v7;
					if (v18)
					{
						v19 = *(_DWORD*)(v18 + 184);
						*(_QWORD*)(v18 + 88) = a2;
						if ((unsigned int)(v19 - 2) <= 1)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 152i64))(a2);
							*(_DWORD*)(v18 + 184) = 3;
						}
					}
				}
			}
		}
	}
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

