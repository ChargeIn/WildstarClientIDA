//----- (00000001407DB544) ----------------------------------------------------
PVOID __fastcall sub_1407DB544(PVOID Ptr)
{
	PVOID v2; // rbx

	v2 = DecodePointer(::Ptr);
	::Ptr = EncodePointer(Ptr);
	return v2;
}

