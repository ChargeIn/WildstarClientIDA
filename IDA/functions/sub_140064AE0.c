//----- (0000000140064AE0) ----------------------------------------------------
__int64 __fastcall sub_140064AE0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	int* v7; // rdx
	unsigned __int64 v8; // rdi
	unsigned __int64 v9; // rbx
	int* v11; // rdi
	unsigned __int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // [rsp+40h] [rbp-8h] BYREF
	unsigned __int64 v15; // [rsp+48h] [rbp+0h] BYREF

	v1 = *(_QWORD*)(a1 + 8);
	v3 = 8i64;
	do
	{
		if (!*(_QWORD*)v1)
		{
			v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v1 + 16))(
				*(_QWORD*)(v1 + 32),
				*(_QWORD*)(v1 + 24),
				&v14);
			if (!v4 || (v5 = v14) == 0)
			{
			LABEL_12:
				sub_14005B130(
					*(_QWORD*)a1,
					(unsigned __int64*)"%s: %s in precompiled chunk",
					*(const char**)(a1 + 24),
					aUnexpectedEnd);
				sub_140061040(*(_QWORD*)a1, 3);
			}
			v6 = v14 - 1;
			*(_QWORD*)(v1 + 8) = v4;
			*(_QWORD*)v1 = v5 - 1;
			*(_QWORD*)(v1 + 8) = v4 + 1;
			*(_QWORD*)v1 = v6 + 1;
			*(_QWORD*)(v1 + 8) = v4;
		}
		v7 = *(int**)(v1 + 8);
		if (*(unsigned __int8*)v7 == -1)
			goto LABEL_12;
		v8 = *(_QWORD*)v1;
		if (v3 <= *(_QWORD*)v1)
			v8 = v3;
		sub_1407DB590((int*)&v15, v7, v8);
		*(_QWORD*)v1 -= v8;
		*(_QWORD*)(v1 + 8) += v8;
		v3 -= v8;
	} while (v3);
	v9 = v15;
	if (!v15)
		return 0i64;
	v11 = (int*)sub_140062A20(*(_QWORD*)a1, *(__int64**)(a1 + 16), v15);
	v12 = sub_140062960(*(_QWORD*)(a1 + 8), v11, v9);
	v13 = *(_QWORD*)a1;
	if (v12)
	{
		sub_14005B130(v13, (unsigned __int64*)"%s: %s in precompiled chunk", *(const char**)(a1 + 24), aUnexpectedEnd);
		sub_140061040(*(_QWORD*)a1, 3);
	}
	return sub_140062650(v13, (unsigned __int64*)v11, v9 - 1);
}
// 140064B41: conditional instruction was optimized away because ecx.4<100u
// 140064B93: conditional instruction was optimized away because rsi.8!=0

