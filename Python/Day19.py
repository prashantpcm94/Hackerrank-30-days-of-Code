
class Calculator implements AdvancedArithmetic{
    
    public function divisorSum($n){
       
        $sum=0;
        $i=0 ;
        for ($i=1;$i<$n;$i++){
            
            if($n%$i==0){
                $sum+=$i;
            }
        }
        
        return $sum+$n;
    }
    
    
    
    
}
