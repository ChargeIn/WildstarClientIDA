//----- (0000000140285A40) ----------------------------------------------------
__int64 __fastcall sub_140285A40(__int64 a1, float a2)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 224);
	**(float**)(result + 40) = a2;
	return result;
}

