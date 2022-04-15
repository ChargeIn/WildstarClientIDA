//----- (00000001407E2E34) ----------------------------------------------------
_BOOL8 __fastcall sub_1407E2E34(__int64 a1)
{
	unsigned int(__fastcall * v2)(__int64); // rax

	v2 = (unsigned int(__fastcall*)(__int64))DecodePointer(qword_140C603C0);
	return v2 && v2(a1);
}

