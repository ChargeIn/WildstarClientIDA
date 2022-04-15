//----- (0000000140065380) ----------------------------------------------------
__int64 __fastcall sub_140065380(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	int* v7; // rdx
	unsigned __int64 v8; // rdi
	__int64 result; // rax
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	__int64 v11; // [rsp+28h] [rbp-10h]
	unsigned int v12; // [rsp+30h] [rbp-8h]
	__int64 v13; // [rsp+38h] [rbp+0h] BYREF
	int v14; // [rsp+40h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 8);
	v12 = 525320;
	v3 = 12i64;
	v11 = (unsigned int)dword_140C1E4D8 | 0x401005100000000i64;
	do
	{
		if (!*(_QWORD*)v1)
		{
			v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v1 + 16))(
				*(_QWORD*)(v1 + 32),
				*(_QWORD*)(v1 + 24),
				&v10);
			if (!v4 || (v5 = v10) == 0)
			{
			LABEL_13:
				sub_14005B130(
					*(_QWORD*)a1,
					(unsigned __int64*)"%s: %s in precompiled chunk",
					*(const char**)(a1 + 24),
					aUnexpectedEnd);
				sub_140061040(*(_QWORD*)a1, 3);
			}
			v6 = v10 - 1;
			*(_QWORD*)(v1 + 8) = v4;
			*(_QWORD*)v1 = v5 - 1;
			*(_QWORD*)(v1 + 8) = v4 + 1;
			*(_QWORD*)v1 = v6 + 1;
			*(_QWORD*)(v1 + 8) = v4;
		}
		v7 = *(int**)(v1 + 8);
		if (*(unsigned __int8*)v7 == -1)
			goto LABEL_13;
		v8 = *(_QWORD*)v1;
		if (v3 <= *(_QWORD*)v1)
			v8 = v3;
		sub_1407DB590((int*)&v13, v7, v8);
		*(_QWORD*)v1 -= v8;
		*(_QWORD*)(v1 + 8) += v8;
		v3 -= v8;
	} while (v3);
	if (v11 != v13 || (result = v12, v12 != v14))
	{
		sub_14005B130(
			*(_QWORD*)a1,
			(unsigned __int64*)"%s: %s in precompiled chunk",
			*(const char**)(a1 + 24),
			aBadHeader);
		sub_140061040(*(_QWORD*)a1, 3);
	}
	return result;
}
// 14006540E: conditional instruction was optimized away because ecx.4<100u
// 14006546A: conditional instruction was optimized away because rsi.8!=0
// 140C1E4D8: using guessed type int dword_140C1E4D8;

