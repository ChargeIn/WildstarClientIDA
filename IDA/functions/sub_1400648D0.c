//----- (00000001400648D0) ----------------------------------------------------
__int64 __fastcall sub_1400648D0(__int64 a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	int* v7; // rdx
	unsigned __int64 v8; // rdi
	__int64 result; // rax
	unsigned int v10; // [rsp+40h] [rbp+0h] BYREF
	__int64 v11; // [rsp+48h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 8);
	v3 = 4i64;
	do
	{
		if (!*(_QWORD*)v1)
		{
			v4 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v1 + 16))(
				*(_QWORD*)(v1 + 32),
				*(_QWORD*)(v1 + 24),
				&v11);
			if (!v4 || (v5 = v11) == 0)
			{
			LABEL_12:
				sub_14005B130(
					*(_QWORD*)a1,
					(unsigned __int64*)"%s: %s in precompiled chunk",
					*(const char**)(a1 + 24),
					aUnexpectedEnd);
				sub_140061040(*(_QWORD*)a1, 3);
			}
			v6 = v11 - 1;
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
		sub_1407DB590((int*)&v10, v7, v8);
		*(_QWORD*)v1 -= v8;
		*(_QWORD*)(v1 + 8) += v8;
		v3 -= v8;
	} while (v3);
	result = v10;
	if ((v10 & 0x80000000) != 0)
	{
		sub_14005B130(
			*(_QWORD*)a1,
			(unsigned __int64*)"%s: %s in precompiled chunk",
			*(const char**)(a1 + 24),
			aBadInteger);
		sub_140061040(*(_QWORD*)a1, 3);
	}
	return result;
}
// 140064931: conditional instruction was optimized away because ecx.4<100u
// 14006497F: conditional instruction was optimized away because rsi.8!=0

