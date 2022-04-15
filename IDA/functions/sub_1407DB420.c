//----- (00000001407DB420) ----------------------------------------------------
void __fastcall __noreturn sub_1407DB420(char* a1)
{
	__int64 pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
	char* v2; // [rsp+50h] [rbp+8h] BYREF

	v2 = a1;
	sub_1407E1A38((__int64)pExceptionObject, &v2);
	pExceptionObject[0] = (__int64)&std::length_error::`vftable';
		CxxThrowException(pExceptionObject, (_ThrowInfo*)&_TI3_AVlength_error_std__);
}
// 14095BF40: using guessed type void *std::length_error::`vftable';

