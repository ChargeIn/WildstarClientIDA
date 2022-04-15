//----- (00000001402CCCA0) ----------------------------------------------------
void __fastcall sub_1402CCCA0(_QWORD* a1, int a2)
{
	_QWORD* v3; // rcx
	_QWORD* v4; // rdx
	unsigned int v5; // edi
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rdx
	__int64 v10; // r8
	__int64 v11; // rcx
	_QWORD* v12; // r9
	__int64 v13; // r9
	unsigned __int64 v14; // rdx
	__int64 v15; // r8
	__int64 v16; // rcx
	_QWORD* v17; // r9
	__int64 v18; // r9

	if (a2)
	{
		if (!a1[65])
		{
			v3 = a1 + 66;
			v4 = (_QWORD*)(qword_140C657F0 + 1240);
			*(v3 - 1) = qword_140C657F0 + 1240;
			*v3 = *v4;
			*v4 = a1;
			if (*v3)
				*(_QWORD*)(*v3 + 520i64) = v3;
			v5 = 0;
			if (a1[32])
			{
				v6 = 0i64;
				do
				{
					(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)(a1[31] + 416 * v6) + 160i64))(
						a1[31] + 416 * v6,
						1i64,
						1i64);
					v6 = ++v5;
				} while ((unsigned __int64)v5 < a1[32]);
			}
		}
	}
	else
	{
		v7 = (_QWORD*)a1[65];
		if (v7)
		{
			*v7 = a1[66];
			v8 = a1[66];
			if (v8)
				*(_QWORD*)(v8 + 520) = a1[65];
			v9 = 0i64;
			a1[65] = 0i64;
			a1[66] = 0i64;
			if (a1[32])
			{
				v10 = 0i64;
				do
				{
					v11 = v10 + a1[31];
					v12 = *(_QWORD**)(v11 + 392);
					if (v12)
						*v12 = *(_QWORD*)(v11 + 400);
					v13 = *(_QWORD*)(v11 + 400);
					if (v13)
						*(_QWORD*)(v13 + 392) = *(_QWORD*)(v11 + 392);
					++v9;
					*(_QWORD*)(v11 + 392) = 0i64;
					*(_QWORD*)(v11 + 400) = 0i64;
					v10 += 416i64;
				} while (v9 < a1[32]);
			}
			v14 = 0i64;
			if (a1[34])
			{
				v15 = 0i64;
				do
				{
					v16 = v15 + a1[33];
					v17 = *(_QWORD**)(v16 + 368);
					if (v17)
						*v17 = *(_QWORD*)(v16 + 376);
					v18 = *(_QWORD*)(v16 + 376);
					if (v18)
						*(_QWORD*)(v18 + 368) = *(_QWORD*)(v16 + 368);
					++v14;
					*(_QWORD*)(v16 + 368) = 0i64;
					*(_QWORD*)(v16 + 376) = 0i64;
					v15 += 384i64;
				} while (v14 < a1[34]);
			}
		}
	}
}
// 140C657F0: using guessed type __int64 qword_140C657F0;

