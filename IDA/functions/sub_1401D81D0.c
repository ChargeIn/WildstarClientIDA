//----- (00000001401D81D0) ----------------------------------------------------
__int64 __fastcall sub_1401D81D0(volatile signed __int32* a1)
{
	unsigned __int32 v1; // ebx

	v1 = _InterlockedDecrement(a1 + 2);
	if (!v1 && a1)
		(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 144i64))(a1, 1i64);
	return v1;
}

