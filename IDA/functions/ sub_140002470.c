//----- (0000000140002470) ----------------------------------------------------
__int64 __fastcall sub_140002470(__int64 a1)
{
	sub_1400021B0((_DWORD*)a1);
	BinkRegisterFrameBuffers(*(_QWORD*)(a1 + 96), a1 + 104);
	return BinkDoFrameAsyncMulti(*(_QWORD*)(a1 + 96), a1 + 28, *(unsigned int*)(a1 + 60));
}
// 140959B60: using guessed type __int64 __fastcall BinkRegisterFrameBuffers(_QWORD, _QWORD);
// 140959C08: using guessed type __int64 __fastcall BinkDoFrameAsyncMulti(_QWORD, _QWORD, _QWORD);

