//----- (00000001408A7FC0) ----------------------------------------------------
void** __fastcall sub_1408A7FC0(__int64 a1, int a2, int a3, int a4, int a5, float a6, float a7)
{
	void** result; // rax
	unsigned int v8; // ebx
	double v12; // xmm6_8
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = &retaddr;
	v8 = 0;
	if (*(_WORD*)(a1 + 18))
	{
		HIDWORD(v12) = 0;
		*(float*)&v12 = (float)a3;
		do
		{
			sub_1408A81D0(
				(__m128*)(*(_QWORD*)a1 + 176i64 * (a2 + v8 * *(unsigned __int16*)(a1 + 16))),
				a4,
				v12,
				COERCE_DOUBLE((unsigned __int64)a5),
				a6,
				a7);
			result = (void**)*(unsigned __int16*)(a1 + 18);
			++v8;
		} while (v8 < (unsigned int)result);
	}
	return result;
}

