//----- (00000001407B6280) ----------------------------------------------------
__int64 __fastcall sub_1407B6280(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 16) = a2;
	(**a2)(a2);
	result = 0i64;
	*(_OWORD*)(a1 + 864) = xmmword_140C798C0;
	*(_OWORD*)(a1 + 880) = xmmword_140C798D0;
	*(_OWORD*)(a1 + 672) = xmmword_140C78390;
	*(_OWORD*)(a1 + 688) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 704) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 720) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 608) = xmmword_140C78390;
	*(_OWORD*)(a1 + 624) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 640) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 656) = xmmword_140C783C0;
	return result;
}
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

