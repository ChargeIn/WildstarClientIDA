//----- (000000014082EEB0) ----------------------------------------------------
__int64 __fastcall sub_14082EEB0(__int64 a1)
{
	HANDLE EventW; // rax

	EventW = CreateEventW(0i64, 1, 0, 0i64);
	*(_QWORD*)(a1 + 224) = EventW;
	if (EventW)
		return sub_140856110((_BYTE*)(a1 + 208));
	else
		return 2i64;
}

